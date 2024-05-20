void findSubsets(int nums[], int n)
{
    
    for (int i = 0; i < (1 << n); i++) {
 
        for (int j = 0; j < n; j++) {
 
            if ((i & (1 << j)) != 0) {
 
                cout << nums[j] << " ";
            }
        }
 
        cout << endl;
    }

}

// Time Complexity: O(2^N), where N is the size of given array.

// Auxiliary Space:
// O(1) : if we only print our subsets
// O(2^N) : if we would store all the subsets we will need 2^N memory blocks to store each subset
