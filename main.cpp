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

// int minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
//     vector<pair<int, int>> hCuts, vCuts;
//     for (int i = 0; i < horizontalCut.size(); ++i) {
//         hCuts.push_back({horizontalCut[i], i});
//     }
//     for (int j = 0; j < verticalCut.size(); ++j) {
//         vCuts.push_back({verticalCut[j], j});
//     }
//     sort(hCuts.rbegin(), hCuts.rend());
//     sort(vCuts.rbegin(), vCuts.rend());
//     int hCutsCount = 1, vCutsCount = 1;
//     int i = 0, j = 0;
//     int totalCost = 0;
//     while (i < hCuts.size() && j < vCuts.size()) {
//         if (hCuts[i].first >= vCuts[j].first) {
//             totalCost += hCuts[i].first * vCutsCount;
//             ++hCutsCount;
//             ++i;
//         } else {
//             totalCost += vCuts[j].first * hCutsCount;
//             ++vCutsCount;
//             ++j;
//         }
//     } 
//     while (i < hCuts.size()) {
//         totalCost += hCuts[i].first * vCutsCount;
//         ++i;
//     }
//     while (j < vCuts.size()) {
//         totalCost += vCuts[j].first * hCutsCount;
//         ++j;
//     }
//     return totalCost;
// }

/*

Example 1:

Input: mapping = [8,9,4,0,2,1,3,5,7,6], nums = [991,338,38]
Output: [338,38,991]
Explanation: 
Map the number 991 as follows:
1. mapping[9] = 6, so all occurrences of the digit 9 will become 6.
2. mapping[1] = 9, so all occurrences of the digit 1 will become 9.
Therefore, the mapped value of 991 is 669.
338 maps to 007, or 7 after removing the leading zeros.
38 maps to 07, which is also 7 after removing leading zeros.
Since 338 and 38 share the same mapped value, they should remain in the same relative order, so 338 comes before 38.
Thus, the sorted array is [338,38,991].


mappping[nums[i][i]] = 6
9 = 6
1 = 9

*/

vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
    unordered_map<int, int> mappingMap;
    for(auto by : mapping) 
        mappingMap[by] = by;

    list<int> numbers;
    for(int i  = nums[0]; i > 10; i / 10)
        numbers.push_front(i % 10);
    
    return mapping;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    arr_i _mapping{8,9,4,0,2,1,3,5,7,6}, 
          _nums{991,338,38};

    arr_i nums = sortJumbled(_mapping, _nums);
    
    // for(auto& by : nums)
    //     cout << by;


    list<int> numbers;
    for(int i  = _nums[0]; i > 10; i / 10)
        numbers.push_front(i % 10);

    for(auto nm : numbers)
        cout <<  "Value-of-element -> "<< nm << endl;
    
    
    return 0;
}
