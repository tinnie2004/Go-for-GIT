#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;

const int MAX = 100;

struct student{
    char name[20];
    long int rollno;
    char sex;
    float height;
    float weight;
};

int main() {
    student cls[MAX];
    int i,n;
    double totalHeight, totalWeight;
    cout << "How many names ? \n";
    cin >> n;

    for (i = 0; i <= n-1; ++i){
        cout << "record = "<< i+1 << endl;
        cout << "name : "; cin>> cls[i].name;
        cout << "rollno : "; cin>> cls[i].rollno;
        cout << "sex : "; cin>> cls[i].sex;
        cout << "height : "; cin>> cls[i].height;
        cout << "weight : "; cin>> cls[i].weight;
        cout << endl;
    }
    // TODO
    cout<<left<<setw(20)<<"Name"
              <<setw(20)<<"Rollno"
              <<setw(20)<<"Sex"
              <<setw(20)<<"Height"
              <<setw(20)<<"Weight"<<endl;
    
    for (i = 0; i <= n-1; ++i){
        cout<<left<<setw(20)<<cls[i].name
                  <<setw(20)<<cls[i].rollno
                  <<setw(20)<<cls[i].sex
                  <<setw(20)<<setprecision(2)<<fixed<<cls[i].height
                  <<setw(20)<<cls[i].weight
                  <<endl;
        totalHeight += cls[i].height;
        totalWeight += cls[i].weight;
        
        
    }
    cout<<setprecision(5)<<fixed<<totalHeight/n<<" "
                                <<totalWeight/n;
    return 0;
}
