    //백준 10845 큐
    #include <iostream>
    #include <queue>
    #include <string>   

    using namespace std;

    int main()
    {

    int n,x;  
    cin>>n;

    queue<int> q;
    string op;

    for (int i = 0; i < n; i++)
    {
        cin>>op;
        if (op=="push"){
            cin>>x;
            q.push(x);
        }
        else if (op=="pop"){
            if (q.front()==-1) cout<<"-1\n";
            else {
                cout<<q.front()<<"\n";
                q.pop();
            }
        }
        else if(op=="size"){
            cout<<q.size()<<"\n";
        }
        else if(op=="empty"){
            if (q.empty()) cout<<"1\n";
            else cout<<0<<"\n";
        }
        else if(op=="front"){
            if (q.empty()) cout<<"-1\n";
            else cout<< q.front() <<"\n";
        }
        else if(op=="back"){
            if (q.empty()) cout<<"-1\n";
            else cout<< q.back() <<"\n";
        }

        }
    return 0;
    }