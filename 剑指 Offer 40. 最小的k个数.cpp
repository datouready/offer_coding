class Solution {
public:
	vector<int> getLeastNumbers(vector<int>& arr, int k) {

		// sort(arr.begin(),arr.end());
		// vector<int> ret(arr.begin(),arr.begin()+k);
		// return ret;

		quicksort(arr,0,arr.size()-1);
		vector<int> ret(arr.begin(), arr.begin() + k);
		return ret;

	}
	void quicksort(vector<int>& arr,int left,int right)
	{
		if (left>=right)
		{
			return;
		}
		int i = left;
		int j = right;
		int temp = arr[left];
		while (i < j)
		{
			while (i < j)
			{
				if (arr[j] < temp)
				{
					arr[i] = arr[j];
					i++;
					break;
				}
				else
				{
					j--;
				}
			}

			while (i < j)
			{
				if (arr[i] > temp)
				{
					arr[j] = arr[i];
					j--;
					break;
				}
				else
				{
					i++;
				}
			}
		}
		arr[i] = temp;
		//vector<int> left(arr.begin(), arr.begin() + i);
		//vector<int> right(arr.begin() + i+1, arr.end());
		quicksort(arr,left,i-1);
		quicksort(arr,i+1,right);
	}
};
