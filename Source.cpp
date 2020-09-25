
#pragma once
#if 0
bool isDuplicateNumber(int* array, int n)
{
	if (array == NULL)
		return false;
	int i = 0;
	int temp = 0;

	for (i = 0; i < n; i++)
	{
		while (array[i] != i)
		{
			if (array[array[i]] == array[i])
			{
				return true;
			}
			temp = array[array[i]];
			array[array[i]] = array[i];
			array[i] = temp;
		}
	}

	return false;
}
#endif
#if 0
#include <vector>
#include <iostream>

int onceQuickSort(vector<int> &data, int left, int right)
{
	int key = data[left];

	while (left < right && key <= data[right])
	{
		right--;
	}
	if (left < right)
	{
		data[left++] = data[right];
	}

	while (left < right && key > data[right])
	{
		left++;
	}
	if (left < right)
	{
		data[right--] = data[left];
	}
	data[left] = key;

	return left;
}

int quickSort()
{
	if (left > right)
	{
		return 1;
	}
	
	int middle = 0;
	middle = onceQuickSort(data, left, right);
	quickSort(data, left, middle);
	quickSort(data, middle + 1, right);

	return 1;
}

#endif

#include <vector>

class Solution {
public:
	bool findTarget(int target, vector<vector<int>> array)
	{
		int row = array.size();
		int col = array[0].size();

		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				if (target == array[i][j])
				{
					return true;
				}
			}
		}

		return false;
	}
};

class Solution {
public:
	void replaceSpace(char* str, int length)
	{
		int i = 0;

		while (str[i] != '\0')
		{
			if (str[i] == ' ')
			{
				for (int j = length - 1; j > i; --j)
				{
					str[j + 2] = str[j];
				}
				str[i + 2] = '0';
				str[i + 1] = '2';
				str[i] = '%';
				length += 2;
				i = i + 2;
			}
			else
			{
				++i;
			}
		}

	}
};

class Solution
{
public:
	vector<int> printListFromTailToHead(ListNode *head)
	{
		ListNode* p = head;
		vector<int> result;

		while (p != NULL)
		{
			result.push_back(p->value);
			p = p->next;
		}
		
		reverse(result.begin(), result.end());

		return result;
	}
};

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin)
	{
		int len = vin.size();
		if (len == 0)
		{
			return NULL;
		}

		vector<int> left_pre, right_pre, left_vin, right_vin;

		TreeNode* head = new TreeNode(pre[0]);
		int gen = 0;

		for (int i = 0; i < len; i++)
		{
			if (vin[i] == pre[0])
			{
				gen = i;
				break;
			}
		}

		for (int i = 0; i < gen; ++i)
		{
			left_pre.push_back(pre[i + 1]);
			left_vin.push_back(vin[i]);
		}

		for (int i = gen + 1; i < len; i++)
		{
			right_pre.push_back(pre[i]);
			right_vin.push_back(vin[i]);
		}

		head->left = reConstructBinaryTree(left_pre, left_vin);
		head->right = reConstructBinaryTree(right_pre, right_vin);

		return head;
	}
};

class solution
{
public:
	void push(int node)
	{
		stack1.push(node);
	}
	int pop()
	{
		int val = 0;

		if (stack2.size() > 0)
		{
			value = stack1.top();
			srack2.pop();
		}
		else if (stack1.size() > 0)
		{
			while(stack1.size() > 0)
			{ 
			int element = stack1.top();
			stack2.push(element);
			stack1.pop();
			}
			value = stack2.top();
			stack2.pop();
		}
		return value;
	 }
};

class solution
{
public:
	int minNumberInRotateArray(vector<int> rotateArray)
	{
		if (rotateArray.size() == 0)
		{
			return 0;
		}
		else
		{
			int i = 0;
			while (rotateArray[i] > rotateArray[i + 1])
			{
				i++;
			}

			vector<int> resultArray;
			int m = 0;
			for (int j = i + 1; j < rotateArray.size(); j++)
			{
				resultArray[m++] = rotateArray[j];
			}
			for (int j = 0; j <= i; ++j)
			{
				resultArray[m++] = rotateArray[j];
			}
		}

		sort(rotateArray.begin(), rotateArray.end());

		return rotateArray[0];
	}
};

class solution
{
public:
	int fabonacci(int n)
	{
		if (n == 0)
		{
			return 0;
		}
		else if (n == 1)
		{
			return 1;
		}
		else
		{
			int a = 0; 
			int b = 1;
			int temp;

			while (n > 1)
			{
				temp = a;
				a = b;
				b = temp + b;
				n--;
			}
			return b;
		}
	}
};

class solution
{
public:
	int jumpFloor(int number)
	{
		if (number == 1)
		{
			return 1;
		}
		else if (number == 2)
		{
			return 2;
		}
		else
		{
			return jumpFloor(number - 1) + jumpFloor(number - 2);
		}
	}
}

class solution
{
public:
	int rectCover(int number)
	{
		if (number == 0)
		{
			return 0;
		}
		else if (number == 1)
		{
			return 1;
		}
		else if (number == 2)
		{
			return 2;
		}
		else
		{
			int a = 1;
			int b = 2;
			int temp;

			while (number > 2)
			{
				temp = a;
				a = b;
				b = b + temp;
				--number;
			}
			return b;
		}
	}
};

class solution
{
public:
	int numberOfOne(int n) 
	{
		int result = 0;
		unsigned int flag = 1;

		while (flag)
		{
			if (n & flag)
			{
				result++;
			}
			flag = flag << 1;
		}
		return result;
	}
};

class solution
{
public:
	double power(double base, int exponent)
	{
		double result = 1;

		if (exponent > 0)
		{
			result = result * base;
		}
		else if (exponent == 0)
		{
			return 1;
		}
		else
		{
			base = 1 / base;
			for (int i = 0; i <= abs(exponent); ++i)
			{
				result = result * base;
			}
		}
		return result;
	}
};

class Solution
{
public:
	void reOrderArray(vector<int>& array)
	{
		vector<int> result_even, result_odd;

		for (int i = 0; i < array.size(); ++i)
		{
			if (array[i] % 2 == 0)
			{
				result_even.push_back(array[i]);
			}
			else
			{
				result_odd.push_back(array[i]);
			}
		}
		result_odd.insert(result_even.begin(), result_even.end());
		
		array = result_odd;
	}
};

struct ListNode
{
	int val;
	struct ListNode* next;
	ListNode(int x) :
		val(x), next(NULL)
	{

	}
};

class solution
{
public:
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k)
	{
		ListNode* p;
		p = pListHead;

		for (int i = 0; i != k; ++i)
		{
			if (p == NULL)
			{
				return NULL;
			}
			else
			{
				p = p->next;
			}

			while (p != NULL)
			{
				p = p->next;
				pListHead = pListHead->next;
			}
		}
		return pListHead;
	}
};

struct ListNode
{
	int val;
	struct ListNode* next;
	ListNode(int x) :
		val(x), next(NULL)
	{

	}
};

class solution
{
public:
	ListNode* reverseList(ListNode* phead)
	{
		ListNode* last;
		ListNode* temp;
		last = NULL;
		
		while (phead != NULL)
		{
			temp = phead->next;
			phead->next = last;
			last = phead;
			phead = temp;
		}
		return last;
	}
};

struct ListNode 
{
	int val;
	struct ListNode* next;
	ListNode(int x) :
		val(x), next(NULL)
	{

	}
};

class solutin
{
public:
	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
	{
		ListNode* phead = new ListNode(0);
		ListNode* list_new = phead;

		while (pHead1 || pHead2)
		{
			if (pHead1 == NULL)
			{
				list_new->next = pHead2;
				break;
			}
			else if (pHead2 == NULL)
			{
				list_new->next = pHead1;
				break;
			}
			
			if (pHead1->val > pHead2->val)
			{
				list_new->next = pHead2;
				list_new = list_new->next;
				pHead2 = pHead2->next;
			}
			else
			{
				list_new->next = pHead1;
				list_new = list_new->next;
				pHead1 = pHead1->next;
			}
		}
		return  list_new;
	}
};

struct TreeNode
{
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
	TreeNode(int x) :
		val(x)
	{

	}
};

class solution
{
public:
	bool hasSubTree(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		if (!pRoot1)
		{
			return false;
		}
		if (!pRoot2)
		{
			return false;
		}

		return (dfs(pRoot1, pRoot2) || hasSubTree(pRoot1->left, pRoot2) || hasSubTree(pRoot1->right, pRoot2));
	}
private:

	bool dfs(TreeNode* R1, TreeNode* R2)
	{
		if (!R2)
		{
			return true;
		}
		if (!R1)
		{
			return false;
		}

		if (R1->val != R2->val)
		{
			return false;
		}

		return dfs(R1->left,R2->left) && dfs(R1->right, R2->right);
	}
};

struct TreeNode
{
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
	TreeNode(int x) :
		val(x), left(NULL), right(NULL)
	{

	}
};

class solution
{
public:
	void Mirror(TreeNode* pRoot)
	{
		if (!pRoot)
		{
			return;
		}

		TreeNode* temp;
		temp = pRoot->left;
		pRoot->left = pRoot->right;
		pRoot->right = temp;
		Mirror(pRoot->right);
		Mirror(pRoot->left);
	}
};

class solution
{
public:
	vector<int> printMatrix(vector<vector<int>> matrix)
	{
		int cir = 0;
		int row = matrix.size();
		int col = matrix[0].size();

		vector<int> ans;

		while (row > 2 * cir && col > 2 * cir)
		{
			//Top
			for (int i = cir; i <= col - cir - 1; ++i)
			{
				ans.push_back(matrix[cir][i]);
			}
			//Right
			if (cir < row - cir - 1)
			{
				for (int i = cir + 1; i < row - cir - 1; ++i)
				{
					ans.push_back(matrix[i][col - cir - 1]);
				}
			}
			//down
			if (col - cir - 1 > cir && row - 1 - cir > cir)
			{
				for (int i = row - cir - 2; i >= cir + 1; --i)
				{
					ans.push_back(matrix[i][cir]);
				}
			}
			++cir;
		}
		return ans;
	}
};

class solution
{
private:
	stack<int> stack1;
	stack<int> stack2;

public:
	void push(int value)
	{
		stack1.push(value);
		
		if (stackmin.empty())
		{
			stackmin.push(value);
		}
		else if (stackmin.top() < value)
		{
			stackmin.push(stackmin.top());
		}
		else
		{
			stackmin.push(value);
		}
	}

	void pop()
	{
		return stack1.top();
	}
	int min()
	{
		return stackmin.top();
	}
};

class solution
{
public:
	bool isPopOrder(vector<int> pushV, vector<int> popV)
	{
		stack<int> st;
		for (int i = 0; i < pushV.size(); ++i)
		{
			st.push(pushV[i]);
			while (!st.empty() && st.top == popV[0])
			{
				st.pop();
				popV.erase(popV.begin());
			}
		}
		
		if (st.empty())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

struct TreeNode
{
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
	TreeNode(int x) :
		val(x), left(NULL), right(NULL)
	{

	}
};

class solution
{
public:
	vector<int> printFromTopToBottom(TreeNode* root)
	{
		vector<int> result;
		queue<TreeNode*> Q;

		TreeNode* fr;
		if (root == NULL)
		{
			return  result;
		}
		Q.push(root);

		while (!Q.empty())
		{
			fr = Q.front();
			result.push_back(fr->val);

			if (fr->left != NULL)
			{
				Q.push(fr->left);
			}
			if (fr->right != NULL)
			{
				Q.push(fr->right);
			}
			Q.pop();
		}

		return result;
	}
};


class solution
{
public:
	bool VerifySquenceOfBST(vector<int> sequence)
	{
		if (sequence.empty())
		{
			return false;
		}

		int index;
		int begin = 0;
		int end = sequence.size() - 1;
		int root = sequence[end];

		for (index = begin; index < end; ++index)
		{
			if (sequence[index] > root)
			{
				break;
			}
		}

		for (int j = index; index < end; index++)
		{
			if (sequence[index] < root)
			{
				return false;
			}
		}

		bool left = true;
		vector<int> left_sq(sequence.begin(), sequence.begin() + index);
		if (index > begin)
		{
			left = VerifySquenceOfBST(left_sq);
		}

		bool right = true;
		vector<int> right_sq(sequence.begin() + index + 1, sequence.end());
		if (index < end - 1)
		{
			right = VerifySquenceOfBST(right_sq);
		}

		return left && right;
	}
};

class solution
{
public:
	void LayerSort(node t)
	{
		Queue<ndoe> q1 = new ArrayDeque<node>();

		if (t == NULL)
		{
			return;
		}
		if (t != NULL)
		{
			q1.add(t);
		}

		while (!q1.isEmpty())
		{
			node t1 = q1.poll();

			if (t1.left != NULL)
			{
				q1.add(t1.left);
			}
			if (t1.right != NULL)
			{
				q1.add(t1.right);
			}
			System.out.print(t1.value + " ");
		}
		System.out.println();
	}
public:
	void qianxu(node t)
	{
		if (t != NULL)
		{
			System.out.print(t.value + " ");
			qianxu(t.left);;
			qianxu(t.right);
		}
	}

	void zhongxu(node  t)
	{
		if (t != NULL)
		{
			zhongxu(t.left);
			system.out.print(t.value + " ");
			zhongxu(t.right);
		}
	}

	void houxu(node t)
	{
		if (t != NULL)
		{
			houxu(t.left);
			houxu(t.right);
			system.out.print(t.value + " ");
		}
	}
}


struct TreeNode
{
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
	TreeNode(int x) :
		val(x), left(NULL), right(NULL)
	{

	}
};

class solution
{
public:
	vector<vector<int>> result;
	vector<int> temp;

	vector<vector<int>> FindPath(TreeNode* root, int expectNumber)
	{
		if (root == NULL)
		{
			return result;
		}

		temp.push_back(root->val);

		if (expectNumber - root->val == 0 && root->left == NULL && root->right == NULL)
		{
			result.push_back(temp);
		}
		FindPath(root->left, expectNumber - root->val);
		FindPath(root->right, expectNumber - root->val);

		if (temp.size() > 0)
		{
			temp.pop_back();
		}

		return result;
	}
};


struct  RandomListNode
{
	int label;
	struct RandomListNode* next;
	struct RandomListNode* random;
	RandomListNode(int x) :
		label(x), next(NULL), random(NULL)
	{

	}
};

class solution
{
public:
	RandomListNode* Clone(RandomListNode* pHead)
	{
		if (pHead == NULL)
		{
			return NULL;
		}
		RandomListNode* cur;
		cur = pHead;

		while (cur)
		{
			RandomListNode* node = new RandomListNode(cur->label);
			node->next = cur->next;
			cur->next = node;
			cur = node->next;
		}

		cur = pHead;
		RandomListNode* p;

		while (cur)
		{
			p = p->next;
			if (cur->random)
			{
				p->random = cur->random->next;
			}
			cur = p->next;
		}

		RandomListNode* temp;
		RandomListNode* phead = pHead->next;
		cur = pHead;
		while (cur->next)
		{
			temp = cur->next;
			cur->next = temp->next;
			cur = temp;
		}

		return phead;
	}
};

struct TreeNode 
{
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
	TreeNode(int x) :
		val(x), left(NULL), right(NULL)
	{
	}
};

class solution
{
	TreeNode* Convert(TreeNode* pRootOfTree)
	{
		stack<TreeNode*> st;
		TreeNode* cur = pRootOfTree;
		TreeNode* pre = pRootOfTree;
		TreeNode* head = pRootOfTree;

		bool isFirst = true;

		while (cur || !st.empty())
		{
			while (cur)
			{
				st.push(cur);
				cur = cur->left;
			}
			cur = st.top();
			st.pop();

			if (isFirst)
			{
				head = pre = cur;
				isFirst = false;
			}
			else
			{
				pre->right = cur;
				cur->left = pre;
				pre = cur;
			}
			cur = cur->right;
		}
		return head;
	}
};

class solution
{
public:
	vector<string> result;
	vector<string> Permutation(string str)
	{
		if (str.length() == 0)
		{
			return result;
		}
		permutation1(str, 0);
		sort(result.begin(), result.end());
		
		return result;
	}

	void permutation1(string str, int begin)
	{
		if (begin == str.length())
		{
			result.push_back(str);
			return;
		}

		for (int i = begin; str[i] != '\0'; ++i)
		{
			if (i != begin && str[begin] == str[i])
			{
				continue;
			}
			swap(str[begin], str[i]);
			permutation1(str, begin + 1);
			swap(str[begin],str[i]);
		}
	}
};


class  solution
{
public:
	//1 2 2 2 2 2 3 3 4 5 5 5 
	int MoreThanHalfNum_Solution(vector<int> numbers)
	{
		int length = number.size();
		if (length == 0)
		{
			return 0;
		}

		sort(number.begin(), number.end());
		int num = numbers[0];
		int max_count = 1;
		int count = 0;

		for (int i = 1; i < length; ++i)
		{
			if (number[i] != number[i - 1])
			{
				if (count > max_count)
				{
					max_count = count;
					num = numbers[i - 1];
				}
				count = 1;
			}
			else
			{
				count++;
			}
		}

		if (max_count > length / 2)
		{
			return num;
		}
		else
		{
			return 0;
		}
	}
};

class solution
{
public:
	vector<int> GetLeastNumbers_Solution(vector<int> input, int k)
	{
		sort(input.begin(), input.end());

		vector<int> result;

		if (k > input.size())
		{
			return result;
		}
		for (int i = 0; i < k; ++i)
		{
			result.push_back(input[i]);
		}

		return result;
	}
};

class solution
{
public:
	int findGreatestSumOfSubArray(vector<int> array)
	{
		int temp_max = array[0];
		int max_num = array[0];

		for (int i = 1; i < array.size(); i++)
		{
			temp_max = max(array[i], array[i] + temp_max);
			max_num = max(temp_max, max_num);
		}

		return max_num;
	}
};

class solution
{
public:
	int numberOf1Between1AndN_Solution(int n)
	{
		int temp = n;
		int last;
		int result = 0;
		int base = 1;

		while (temp)
		{
			last = temp % 10;
			temp = temp / 10;
			result += temp * base;

			if (last == 1)
			{
				result += n % base + 1;
			}
			else if (last > 1)
			{
				result += base;
			}
			base *= 10;
		}

		return result;
	}

};

class solution
{
public:
	string PrintMinNumber(vector<int> numbers)
	{
		string res = "";
		int length = numbers.size();
		
		if (length == 0)
		{
			return "";
		}
		sort(numbers.begin(), numbers.end(), cmp);

		for (int i = 0; i < length; ++i)
		{
			res += std::to_string(numbers[i]);
		}
		return res;
	}

	static bool cmp(int a, int b)
	{
		string A = std::to_string(a) + to_string(b);
		string B = std::to_string(b) + to_string(a);

		return A < B;
	}
};

class solution
{
public:
	int GetUglyNumberSolution(int index)
	{
		if (index < 7)
		{
			return index;
		}
		int t2 = 0;
		int t3 = 0;
		int t5 = 0;

		vector<int> res(index);
		res[0] = 1;

		for (int i = 1; i < index; i++)
		{
			res[i] = min(res[t2] * 2, min(res[t3] * 3, res[t5] * 5));

			if (res[i] == res[t2] * 2)
			{
				t2++;
			}

			if (res[i] == res[t3] * 3)
			{
				t3++;
			}
			if (res[i] == res[t5] * 5)
			{
				t5++;
			}
		}

		return res[index - 1];
	}
};

class solution
{
public:
	int firstNotRepeatingChar(string str)
	{
		int len = str.length();

		if (len == 0)
		{
			return -1;
		}

		char ch[256] = { 0 };

		for (int i = 0; i < len; i++)
		{
			ch[str[i]]++;
		}

		for (int i = 0; i < len; ++i)
		{
			if (ch[str[i]] == 1)
			{
				return i;
			}
		}
		return -1;
	}
};

class solution
{
public:
	int InversePairs(vector<int> data)
	{
		long long res;
		vector<int> copy;

		for (auto i : data)
		{
			copy.push_back(i);
		}

		res = inverseCount(data, 0, data.size()-1, copy);
	}

	long long inverseCount(vector<int>& temp, int begin, int end, vector<int>& data)
	{
		if (end - begin == 0)
		{
			temp[end] = data[end];
			return 0;
		}

		if (end - begin == 1)
		{
			if (data[begin] <= data[end])
			{
				return 0;
			}
			else
			{
				temp[begin] = data[end];
				temp[end] = data[begin];
				return 1;
			}
		}
		int mid = (end + begin) / 2;
		long long cnt = 0;
		long long left = inverseCount(data, begin, mid, temp);
		long long right = inverseCount(data, mid + 1, end, temp);
		int i = begin;
		int j = mid + 1;
		int index = begin;

		while(i <= mid && j <= end)
		{
			if (data[i] <= data[j])
			{
				temp[index] = data[j];
				i++;
			}
			else
			{
				temp[index] = data[j];
				j++;
				cnt = cnt + mid - i + 1;
			}
			index++;
		}

		while (i <= mid)
		{
			temp[index] = data[i];
			++i;
			++index;
		}
		while (j <= end)
		{
			temp[index] = data[j];
			++j;
			index++;
		}

		return cnt + left + right;
	}
};


struct ListNode
{
	int val;
	struct ListNode* next;
	ListNode(int x) :
		val(x), next(NULL)
	{

	}
};

class solution
{
public:
	ListNode* findFirstCommonNode(ListNode* pHead1, ListNode* pHead2)
	{
		ListNode* p1 = pHead1;
		ListNode* p2 = pHead2;
		int len1 = 0;
		int len2 = 0;
		int diff;

		while(p1)
		{ 
			len1++;
			p1 = p1->next;
		}
		while (p2)
		{
			len2++;
			p2 = p2->next;
		}

		if (len1 > len2)
		{
			diff = len1 - len2;
			p1 = pHead1;
			p2 = pHead2;
		}
		else
		{
			diff = len2 - len1;
			p1 = pHead2;
			p2 = pHead1;
		}

		for (int i = 0; i < diff; ++i)
		{
			p1 = p1->next;
		}
		while (p1 != NULL && p2 != NULL)
		{
			if (p1 == p2)
			{
				break;
			}

			p1 = p1->next;
			p2 = p2->next;
		}

		return p1;
	}
};

class solution
{
public:
	int getNumberOfK(vector<int>data, int k)
	{
		int count = 0;

		for (int i = 0; i < data.size(); ++i)
		{
			if (data[i] == k)
				++count;
		}
		return count;
	}
};

struct TreeNode
{
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
	TreeNode(int x) :
		val(x), left(NULL), right(NULL)
	{

	}
};

class solution
{
public:
	int TreeDepth(TreeNode* pRoot)
	{
		if (!pRoot)
		{
			return 0;
		}
		return max(1 + TreeDepth(pRoot->left), 1 + TreeDepth(pRoot->right));
	}
};

class solution
{
public:
	bool isBalancedSolution(TreeNode* pRoot)
	{
		if (pRoot == NULL)
		{
			return true;
		}

		int leftDepth = getDepth(pRoot->left);
		int rightDepth = getDepth(pRoot->right);

		if (leftDepth > rightDepth + 1 || leftDepth + 1 < rightDepth)
		{
			return false;
		}
		else
		{
			return isBalancedSolution(pRoot->left) && isBalancedSolution(pRoot->right);
		}

		int getDepth(TreeNode* pRoot)
		{
			if (pRoot == NULL)
			{
				return 0;
			}
			return max(1 + getDepth(pRoot->left), 1 + getDepth(pRoot->right));
		}
	}
};

class solution
{
public:
	void findNumsAppearOnce(vector<int> data, int* num1, int* num2)
	{
		int len = data.size();
		if (len < 2)
		{
			return;
		}

		int one = 0;
		for (int i = 0; i < len; i++)
		{
			one = one ^ data[i];
		}

		int flag = 1;
		while (flag)
		{
			if (one & flag)
			{
				break;
			}
			flag = flag << 1;
		}

		for (int i = 0; i < len; ++i)
		{
			if (flag & data[i])
			{
				*num1 = *num1 ^ data[i];
			}
			else
			{
				*num2 = *num2 ^ data[i];
			}
		}
	}
};

class solution
{
public:
	vector<vector<int>> findContinuousSequence(int sum)
	{
		int m;

		vector<vector<int>> result;
		vector<int> num;

		for (int n = 1; n < sum; n++)
		{
			m = 1;
			while (true)
			{
				if ((2 * n * m) * (m + 1) < 2 * sum)
				{
					m = m + 1;
				}
				else if ((2 * n + m) * (m + 1) == 2 * sum)
				{
					for (int i = n; i <= n + m; i++)
					{
						num.push_back(i);
					}
					result.push_back(num);
					num.clear();
					break;
				}
				else
				{
					break;
				}
			}
		}
		return result;
	}
};