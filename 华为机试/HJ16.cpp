#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main(){
    int N, m; 
    cin >> N >> m;
    N /= 10; 
 
    int price, priority, hasAttachments;
    vector<vector<int>> data(m+1, vector<int>(6, 0));
     
    for(int i = 1; i <= m; i++){
        cin >> price >> priority >> hasAttachments;
        if(hasAttachments == 0){
            data[i][0] = price/10;
            data[i][1] = priority;
        }
        else if(data[hasAttachments][2] == 0){
            data[hasAttachments][2] = price/10;
            data[hasAttachments][3] = priority;
        }
        else {
            data[hasAttachments][4] = price/10;
            data[hasAttachments][5] = priority;
        }
    }
 
    vector<vector<int>> dp(m+1, vector<int>(N+1, 0));
    for(int i = 1; i < m+1; i++){
        for(int j = 1; j < N+1; j++){
            int pricePrime = data[i][0];
            int priceAtta1 = data[i][2];
            int priceAtta2 = data[i][4];
             
            int priorPrime = data[i][1];
            int priorAtta1 = data[i][3];
            int priorAtta2 = data[i][5];
 
            dp[i][j] = j >= pricePrime ? max(dp[i-1][j - pricePrime]
                                            + priorPrime * pricePrime,
                                            dp[i-1][j]) : dp[i-1][j];
            dp[i][j] = j >= (pricePrime + priceAtta1) ? max(dp[i-1][j - pricePrime - priceAtta1]
                                                        + priorPrime * pricePrime
                                                        + priorAtta1 * priceAtta1,
                                                        dp[i][j]) : dp[i][j];
            dp[i][j] = j >= (pricePrime + priceAtta2) ? max(dp[i-1][j - pricePrime - priceAtta2]
                                                        + priorPrime * pricePrime
                                                        + priorAtta2 * priceAtta2,
                                                        dp[i][j]) : dp[i][j];
            dp[i][j] = j >= (pricePrime + priceAtta1 + priceAtta2) ?
                                                        max(dp[i-1][j - pricePrime - priceAtta1 - priceAtta2]
                                                        + priorPrime * pricePrime
                                                        + priorAtta1 * priceAtta1
                                                        + priorAtta2 * priceAtta2,
                                                        dp[i][j]) : dp[i][j];
        }
    }
    cout << dp[m][N] * 10 <<endl;
    }