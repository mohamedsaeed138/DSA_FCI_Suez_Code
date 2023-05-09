# Data Structures &amp; Algorithms Code

***اسأل الله العظيم رب العرش العظيم ان يرزقنا واياكم الجنة,
وان يغفر لنا جميع ذنوبنا ما  كبر منها وما صغر,
اللهم اجعل هذا العمل علما كريما ينتفع به, واجعله في ميزان حسناتي.***
## Notes

   1. I used Template in all Data Structures & Algorithms
   2. a tip to understand (pointer to    function ) that i used in tree traversal
    functions instead of (cout<<) , 
    for example :<br>
    void *x(int ) 's a pointer to function that accept integer parameter and do something then return nothing and to call that function we use (*pointer_name)(passed_argument) like ( *x )( 8 );
   3. I used exception handling in my code ,so if you didn't know what  it's ,please go to this link : https://www.w3schools.com/cpp/cpp_exceptions.asp it's very easy to learn .  

## Repository Content
### Sheets
 1. Linked List
   
    * Operations
      
      * bool Is_Empty();
      * int Count();
      * void Insert_First(T value);
      * void Insert_Last(T value);
      * void Insert_At(T value, int position);
      * void Delete_First();
      * void Delete_Last();
      * void Delete_At(int position);
      * void Display();
      * void Reverse();
      * void Merge(Linked_List list_2);
      * Linked_List<T> Split();
      * T Max();
 
 2. Stack
     
    1. Stack By Array
       
    2. Stack By Linked List
      
          
    3. Applications
       1. Palindrome
       2. Reverse String
       3. Balanced Parentheses  
       4. Postfix Evaluation 
    
    * Operations
       
       * bool Is_Empty();
       * bool Stack_Full(); (by array only)
       * int Count();
       * void Push(T value);
       * T Pop();
       * T Peek();
       * void Display();

 3. Queue
     
    1. Circular Queue By Array      
   
    2. Queue By Linked List  
    
    3. Applications
       
       1. Palindrome 
    
    * Operations      
      
       
       * bool Is_Empty();     
       * bool Is_Full(); (by array only)
       * int Size();
       * void EnQueue(T value);
       * void DeQueue(T & variable);
       * T Peek();
       * void Display();
      
 1. Time Complexity 
    * Comparison Between 3 Sorting Techniques (Selection-Bubble-Insertion)
 
 2. Binary Tree
   * Operetions
   
      * int Size();   
      * int Height();    
      * void Insert(T value);    
      * void Level_order_Traverse(void (*Action)(T));
      * void Preorder_Traverse(void (*Action)(T));
      * void Inorder_Traverse(void (*Action)(T));
      * void Postorder_Traverse(void (*Action)(T));
      * void Display();

### Algorithms

1. Linear Search
2. Binary Search      
3. Selection Sort
4. Bubble Sort
5. Insertion Sort    
6. Merge Sort
7. Quick Sort
