#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

vector<int> inputs = {10, 20, 30};
vector<int> outputs;

outputs.reserve(inputs.size());


copy(inputs.begin(),inputs.end(),back_inserter(outputs));
cout<<"COPIED VECTOR"<<endl;
for(int x:outputs)
cout<<x<<" ";




return 0;
}
