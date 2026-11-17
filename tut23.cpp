       
// //       //this question isfrom leetcode 238

//  #include <iostream>
//  #include <vector>
//  using namespace std;

// class Solution {
// public:

//     vector<int> searchRange(vector<int>& nums, int target) {

//         int left = findLeft(nums, target);
//         int right = findRight(nums, target);

//         return {left, right};
//     }

// private:

//     int findLeft(vector<int>& nums, int target) {

//         int low = 0, high = nums.size() - 1;
//         int ans = -1;

//         while (low <= high) {

//             int mid = low + (high - low) / 2;

//             if (nums[mid] == target) {
//                 ans = mid;
//                 high = mid - 1;
//             }
//             else if (nums[mid] < target) {
//                 low = mid + 1;
//             }
//             else {
//                 high = mid - 1;
//             }
//         }

//         return ans;
//     }

//     int findRight(vector<int>& nums, int target) {

//         int low = 0, high = nums.size() - 1;
//         int ans = -1;

//         while (low <= high) {

//             int mid = low + (high - low) / 2;

//             if (nums[mid] == target) {
//                 ans = mid;
//                 low = mid + 1;
//             }
//             else if (nums[mid] < target) {
//                 low = mid + 1;
//             }
//             else {
//                 high = mid - 1;
//             }
//         }

//         return ans;
//     }
// };

// int main() {

//     Solution obj;

//     vector<int> nums = {5, 7, 7, 8, 8, 10};
//     int target = 8;

//     vector<int> result = obj.searchRange(nums, target);

//     cout << "[" << result[0] << ", " << result[1] << "]";

//   return 0;
// }

#include <iostream>
using namespace std;

class shop {
  int itemID[100];
  int itemPrice[100];
  int counter;

  public:
  void initCounter(void) { counter = 0;}
   void getPrice(void);
   void setPrice(void);
};

// void shop::getPrice(void) {
//   cout<<"Enter ID of your item "<<endl;
//   cin>>itemID[counter];
//     cout<<"Enter price of your item "<<endl;
//   cin>>itemPrice[counter];
// }

void shop::setPrice(void) {
  cout<<"Enter ID of your item "<<endl;
  cin>>itemID[counter];
    cout<<"Enter price of your item "<<endl;
  cin>>itemPrice[counter];
  counter++;

}

void shop ::displayPrice(void){
  for( int i=0; i<counter; i++)
  {
    cout<<"Item ID: "<<itemID[i]<<" Price: "<<itemPrice[i]<<endl;
  }
}

int main() {
    shop dukaan;
   dukaan.setPrice();
   dukaan.setPrice();
   dukaan.setPrice();
   dukaan.displayPrice();


return 0;
}