#include<iostream>
using namespace std;
/*
int main()
{
    long i, j, n=0, sum;
    int arr[n];
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
        sum = sum + arr[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}




#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.

class Student{

    private:
        int age;
        int standard;
        string first_name;
        string last_name;

    public:
        void set_age(int a){
            age = a;
        }
        int get_age(){
            return age;
        }
        void set_standard(int s){
            standard = s;
        }
        int get_standard(){
            return standard;
        }
        void set_first_name(string fn){
            first_name = fn;
        }
        string get_first_name(){
            return first_name;
        }
        void set_last_name(string ln){
            last_name = ln;
        }
        string get_last_name(){
            return last_name;
        }
         string to_string()
        {
            stringstream ss; // stringstream return all string and datatype to function call
            ss << age << "," << first_name << "," << last_name << "," << standard;
            return ss.str();
        }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout<< st.to_string();

    return 0;
}

//
#include <iostream>
#include <sstream>
using namespace std;

class Student {
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    public:
        void set_age(int a)
        {
            age = a;
        }
        int get_age()
        {
            return age;
        }

        void set_first_name(string fn)
        {
            first_name = fn;
        }
        string get_first_name()
        {
            return first_name;
        }

        void set_last_name(string ln)
        {
            last_name = ln;
        }
        string get_last_name()
        {
            return last_name;
        }

        void set_standard(int s)
        {
            standard = s;
        }
        int get_standard()
        {
            return standard;
        }

        string to_string()
        {
            stringstream ss;
            ss << age << "," << first_name << "," << last_name << "," << standard;
            return ss.str();
        }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
*/

/*
#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d){

int l = max(a, b);
int r = max(c, d);
int g = max(l, r);

return g;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
*/

//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
int n,i;
int arr[10];
cin>>n;
if(1<=n || n<=1000){
            for(int i=0; i<n; i++){
             cin>>arr[i];
            }
for(int i=3; i>=0; i--){
    cout<<arr[i]<<" ";
}
}
}
//
