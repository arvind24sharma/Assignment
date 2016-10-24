        #include <bits/stdc++.h>
     
        using namespace std;
        string letters = "acdegilmnoprstuw";
        int indices[100000];
        string unhash(long long h) {  
     
           int i = 0;
           while ( h > 37 ) {
              indices[i++] = h % 37;
              h /= 37;
           }
     
           string unhashedWord = "";
           for(int j = i - 1; j >= 0; j--) {
              unhashedWord += letters[ indices[j] ];
           }
     
           return unhashedWord;
        }
        int main() {
        	long long h;
        	cin >> h; 
        	cout<< unhash(h)<<endl;
        	return 0;
        }
