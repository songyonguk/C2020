#include<iostream>
using namespace std;
int main(){
    float a,b,c,d,e,f;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    cin>>f;
    float i,j,k,x,y,z;
    x = ((c-a)*(c-a)+(d-b)*(d-b));
    y = ((c-e)*(c-e)+(d-f)*(d-f));
    z = ((e-a)*(e-a)+(f-b)*(f-b));

    int j=abs(y);
    int k=abs(z);
    if(i<=j and j<=k){
        if(i+j>k){
            if(i*i+j*j==k*k){
                cout<<1;
            }
            else if(i*i+j*j<k*k){
                cout<<2;
            }
            else{
                cout<<3;
            }
        }
        else{
            cout<<0;
        }
    }
    else if(i<=k and k<=j){
        if(i+k>j){
            if(i*i+k*k==j*j){
                cout<<1;
            }
            else if(i*i+k*k<j*j){
                cout<<2;
            }
            else{
                cout<<3;
            }
        }
        else{
            cout<<0;
        }
    }
    else if(j<=i and i<=k){
        if(i+j>k){
            if(i*i+j*j==k*k){
                cout<<1;
            }
            else if(i*i+j*j<k*k){
                cout<<2;
            }
            else{
                cout<<3;
            }
        }
        else{
            cout<<0;
        }
    }
    else if(j<=k and k<=i){
        if(j+k>i){
            if(k*k+j*j==i*i){
                cout<<1;
            }
            else if(k*k+j*j<i*i){
                cout<<2;
            }
            else{
                cout<<3;
            }
        }
        else{
            cout<<0;
        }
    }
    else if(k<=j and j<=i){
        if(k+j>i){
            if(k*k+j*j==i*i){
                cout<<1;
            }
            else if(k*k+j*j<i*i){
                cout<<2;
            }
            else{
                cout<<3;
            }
        }
        else{
            cout<<0;
        }
    }
    else{
        if(k+i>j){
            if(i*i+k*k==j*j){
                cout<<1;
            }
            else if(i*i+k*k<j*j){
                cout<<2;
            }
            else{
                cout<<3;
            }
        }
        else{
            cout<<0;
        }
    }

}


/*#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    if(a*a+b*b==c*c){
        cout<<"2";
    }
    else if(a==b and b==c){
        cout<<"1";
    }
    else if(a*a+b*b>c*c){
        if(a==b){
            cout<<"3";
        }
        else{
            cout<<"4";
        }
    }
    else{
        cout<<"0";
    }
}
*/
/*
 * #include <iostream>

using namespace std;

int main(void) {
    int a, b, c;

    cin >> a >> b >> c;
    if(a+b>c){
        if(a==b){
            if(b==c){
            cout<<1;
        }
            else{
            cout<<3;
        }
        }
        else if((a*a+b*b)==c*c){
                cout<<2;
            }
    else {
            cout<<4;
        }
    }
    else{
            cout<<0;
    }

    return 0;
}
 */



/*#include <iostream>
using namespace std;

int main()
{
    int k,i,n,j = 1;
    cin >> k;
    for (i = 1; i <= k; i++){
        for (n = 1; n <= i; n++){
            cout << j;
            j++;
        }
        cout << endl;
    }
    return 0;
}

*/
/*
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    cin >> i;
    if(i<3||i>99||i%2==0)
        cout<<"error\n";
    else{
        j = i/2;
        for(int y=j; y >= 1; y--) {
            for (int x = 0; x < y; x++) {
                cout << "*";
            }
            cout<<"+";
            for (int x = 0; x < (j - y); x++) {
                cout << "++";
            }
            for (int x = 0; x < y; x++) {
                cout << "*";
            }
            cout << "\n";
        }

        for(int y=0; y < j; y++) {
            for(int x=0; x<y; x++) {
                cout << "*";
            }
            cout<<"+";
            for(int x=0; x<(j-y); x++) {
                cout << "++";
            }
            for(int x=0; x<y; x++){
                cout << "*";
            }
            cout<<"\n";


        }
        return 0;
    }
}
*/
/*
#include <iostream>
using namespace std;
int n,tc,h;
int main() {
    cin >> tc;
    while(tc--) {
        cin >> n;
        h = n/2;
        for(int y= h; y>= -h; y--) {
            for(int x=-h; x<=h; x++) {
                if(x==0 && y ==0) cout << "O";
                else if(x==0) cout << "I";
                else if(y==0) cout << "+";
                else if(x==y) cout<<"*";
                else cout<<".";
            }
            cout<<"\n";
        }
        return 0;
    }
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    cin >> i;
    if(i<3||i>99||i%2==0)
        cout<<"error\n";
    else{
        j = i/2;
        for(int y=j; y >= 0; y--) {
            for(int x=0; x<y; x++){
                cout << "+";
            }
            cout << "*";
            for(int x=0; x<(j-y); x++) {
                cout << "**";
            }
            for(int x=0; x<y; x++) {
                cout << "+";
            }
            cout<<"\n";

        }
        for(int y=1; y <= j; y++) {
            for(int x=0; x<y; x++) {
                cout << "+";
            }
            cout << "*";
            for(int x=0; x<(j-y); x++) {
                cout << "**";
            }
            for(int x=0; x<y; x++){
                cout << "+";
            }
            cout<<"\n";
        }

        return 0;
    }
}
*/

/*
 * Sandclock App
 * #include <iostream>
using namespace std;
int main()
{
    int i, j;
    cin >> i;
    if(i<3||i>99||i%2==0)
        cout<<"error\n";
    else{
        j = i/2;
        for(int y=0; y < j; y++) {
            for(int x=0; x<y; x++) {
                cout << "-";
            }
            cout << "*";
            for(int x=0; x<(j-y); x++) {
                cout << "+*";
            }
            for(int x=0; x<y; x++){
                cout << "-";
            }
            cout<<"\n";
        }
        for(int y=j; y >= 0; y--) {
            for(int x=0; x<y; x++){
                cout << "-";
            }
            cout << "*";
            for(int x=0; x<(j-y); x++) {
                cout << "+*";
            }
            for(int x=0; x<y; x++) {
                cout << "-";
            }
            cout<<"\n";

        }
        return 0;
    }
}
*/