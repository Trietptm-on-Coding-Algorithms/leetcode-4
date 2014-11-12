class MinStack {
	public:
		stack<int>mystack;
		stack<int>min;

		void push(int x) {
			mystack.push(x);
			if(min.empty() || x <= min.top()) min.push(x);
		}

		void pop() {
			if(min.top() == mystack.top()) min.pop();
			mystack.pop();
		}

		int top() {
			return mystack.top();
		}

		int getMin() {
			return min.top();
		}
};
