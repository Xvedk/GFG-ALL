stack<int>st;
        for(int i=0;i<arr.size();i++){
            if(arr[i]=="+" || arr[i]=="-" || arr[i]=="*" || arr[i]=="/"){
                int a=st.top(); st.pop();
                int b=st.top(); st.pop();
                if(arr[i]=="+"){
                    st.push(a+b);
                }
                else if(arr[i]=="-"){
                    st.push(b-a);
                }
                else if(arr[i]=="*"){
                    st.push(b*a);
                }
                else{
                    st.push(b/a);
                }
            }
            else{
                int num=stoi(arr[i]);
                st.push(num);
            }
            
        }
        return st.top();
