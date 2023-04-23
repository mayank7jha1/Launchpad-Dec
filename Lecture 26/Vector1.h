
template<typename T>
class vector1 {
private:
	T *a;
	int Current_Bucket;
	int Total_Size;
public:
	vector1() {
		Current_Bucket = 0;
		Total_Size = 1;
		a = new T[Total_Size];
	}

	void push_back(T d) {

		if (Current_Bucket == Total_Size) {
			T *b = a;
			a = new T[2 * Total_Size];
			Total_Size = 2 * Total_Size;
			//Copy
			for (int i = 0; i < Current_Bucket; i++) {
				a[i] = b[i];
			}
			delete[]b;
		}

		a[Current_Bucket] = d;
		Current_Bucket++;
	}

	void pop_back() {
		Current_Bucket--;
	}

	T front() {
		return a[0];
	}

	T back() {
		return a[Current_Bucket - 1];
	}


	bool empty() {
		if (Current_Bucket == 0) {
			return 1;
		} else {
			return 0;
		}
	}


	int size() {
		return Current_Bucket;
	}

	int capacity() {
		return Total_Size;
	}


	T operator[](int i) {
		return a[i];
	}

};















