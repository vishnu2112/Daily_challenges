#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv)
{
    double x,y,n,f,slope;
    cin >> n >> x >> y;
    set<double>s;
   for(int i=0;i<n;i++)
   {
        double x1,y1;
        cin >> x1 >> y1;
        if (x1 != x){ 	
            slope = (y1 - y) / (x1 - x);
        }
        else
			f=1;
        s.insert(slope);
    }
    if (f==1)
		{
			 cout << s.size() + 1 << endl;
			}
	else
		cout << s.size() << endl;
   
    
        return 0;
	
}
