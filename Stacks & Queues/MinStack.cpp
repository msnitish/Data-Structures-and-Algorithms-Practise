vector<int> st;
int flag;
int mini;

MinStack::MinStack() {
    st.clear(); 
    flag = false;
    mini = INT_MAX;
}

void MinStack::push(int x) {
    st.push_back(x);
    mini = min(mini, x);
}

void MinStack::pop() {
    if(!st.empty())// st.empty is true is stack if empty.
    {
        if(st[st.size()-1] == mini) // here we check if the last element in the 
        // vector is the smallest number.// if it is , then we mark flag as true.
            flag = true;
        st.pop_back(); // we are removing the last element.
    }
}

int MinStack::top() {
    if (st.empty())
        return -1;
    return st[st.size()-1];
}   

int MinStack::getMin() {
    if (st.empty())
        return -1;
    if (flag)
    {
        mini = INT_MAX;
        for (auto i = 0; i<st.size(); ++i)
            mini = min(mini, st[i]);
    }
    return mini;
}
