vector<int> v;
//...
for (auto it=v.begin(); it!=v.end(); ++it) 
{std::cout<<*it<<' ';}

for (int x:v)  {std::cout<<x<<' ';
for (const auto& x:v)  {std::cout<<x<<' ';}
