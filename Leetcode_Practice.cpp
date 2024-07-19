#include <iostream>, 
#include <vector>
#include <map>
#include <unordered_map>
#include <fstream>
#include <regex>
#include <xstring>
#include <stack>
#include <thread>
#include <unordered_set>
using namespace std;

using ull = unsigned long long;
using arr_i = vector<int>;
using arr_s = vector<string>;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

//vector<int> twoSum(vector<int>& nums, int target) {
//    unordered_map<int, int> map;
//    for (int i = 0; i < nums.size(); i++) {
//        int x = target - nums[i];
//        if (map.find(x) != map.end()) {
//            return { map[x], i };
//        }
//        map[nums[i]] = i;
//    }
//    return { 0, 0 };
//}

//bool isValid(string s) {
//        stack<char> st; 
//        for (char c : s) { 
//            if (c == '(' || c == '{' || c == '[') {
//                st.push(c); 
//            }
//            else { 
//                if (st.empty() || 
//                    (c == ')' && st.top() != '(') || 
//                    (c == '}' && st.top() != '{') ||
//                    (c == ']' && st.top() != '[')) {
//                    return false; 
//                }
//                st.pop(); 
//            }
//        }
//        return st.empty(); 
//}

//ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//    ListNode dummy;
//    ListNode* tail = &dummy;
//
//    while (list1 != nullptr && list2 != nullptr) {
//        if (list1->val < list2->val) {
//            tail->next = list1;
//            list1 = list1->next;
//        }
//        else {
//            tail->next = list2;
//            list2 = list2->next;
//        }
//        tail = tail->next;
//    }
//
//    if (list1 != nullptr) {
//        tail->next = list1;
//    }
//    else {
//        tail->next = list2;
//    }
//
//    return dummy.next;
//}

//ListNode* modifiedList(const std::vector<int>& nums, ListNode* head) {
//    std::unordered_set<int> numsSet(nums.begin(), nums.end());
//
//    ListNode* newHead = nullptr;
//    ListNode* temp = nullptr;
//
//    while (head != nullptr) {
//        if (numsSet.find(head->val) == numsSet.end()) {
//            if (newHead == nullptr) {
//                newHead = new ListNode(head->val);
//                temp = newHead;
//            }
//            else {
//                temp->next = new ListNode(head->val);
//                temp = temp->next;
//            }
//        }
//        head = head->next;
//    }
//
//    return newHead;
//}

//string getSmallestString(string s) {
//    for (int i = 0; i < s.size()-1; i++)
//    {
//        char& c = s[i], & f = s[i + 1], temp;
//        if ((c % 2) == (f % 2) && c > f)
//        {
//            temp = f;
//            f = c;
//            c = temp;
//            return s;
//        }
//    }
//    return s;
//}




int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    //for (const auto& arr : test_case)
    //    ans.push_back(getSmallestString(arr));

    //for (int i = 0; i < ans.size(); i++)
    //    cout << "Case: " << (i + 1) << '\t' << boolalpha << ans[i] << endl;

    return 0;
}
