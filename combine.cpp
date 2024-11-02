//Name: Anna Mairaj
//Compiler: g++
//--------------------------------------------

// combines two sorted lists A and B into R
// displays comparison every time it is done
void combine( vector<int> A, vector<int> B, vector<int> &R )
{
     // you can find out the size of A using the
     // size function. Treat A and B like arrays. 
    // Get the sizes of A and B
    int sizeA = A.size();
    int sizeB = B.size();
     cout << "comparison" << endl;

      int a = 0, b = 0; // pointers for A and B
     // be careful -- R comes in as an empty vector with no slots so you have to use push_back

    // Combine the two lists
    while (a < sizeA && b < sizeB) {
        if (A[a] < B[b]) {
            R.push_back(A[a]);
            a++;
        } else {
            R.push_back(B[b]);
            b++;
        }
} // If any elements are left in A
    while (a < sizeA) {
        R.push_back(A[a]);
        a++;
    }
    
    // If any elements are left in B
    while (b < sizeB) {
        R.push_back(B[b]);
        b++;
    }
}


int main()
{  
  vector<int> L1;
  vector<int> L2;
  vector<int> L3;
  int N;  // how many elements in each of L1 and L2
  int e;  // for each element

  cout << "How many elements in each list?" << endl;
  cin >> N;

  cout << "List1"  << endl;
  for (int i = 1; i <=N; i++)
    { cout << "element :"; cin >> e; L1.push_back(e);} 

  cout << "List2"  << endl; 
  for (int i = 1; i <=N; i++)
    { cout << "element :"; cin >> e; L2.push_back(e);} 
  

  // call combine here to combine L1 and L2 into L3
  combine(L1, L2, L3);

  
  cout << "The result is: ";
  for (int i = 0; i < N*2; i++)
    { cout << L3[i]; } cout << endl;

}// end of main
