#include<iostream>
using namespace std;
/*
Description: Import data to the arrays
'Parameter
'- pArr: pointer point to the the address of array matrix in importData() function
- szRow: the Row size of matrix
- szCol: the Col size of matrix
- Return value: true: success, false: fail
*/
bool importData(int*** pArr, int szRow, int szCol){
    int row, col,i;
    *pArr = new int*[szRow];
    for(i = 0; i < szRow; i++){
        (*pArr)[i] = new int[szCol];
    }
    if(pArr){
        for(row = 0; row < szRow; row++){
            for(col = 0; col < szCol; col++){
                cout<<"\nEnter Arr["<<row<<"]"<<"["<<col<<"]"<<"\n";
                cin >> (*pArr)[row][col];
            }    
        }
        return true;
    }
    return false;
}
/*
Description: perform the addition of two matrices
'Parameter
'- pArr1, pArr2: pointer points to the the memory that included address of array matrix in importData() function
- szRow: the Row size of matrix
- szCol: the Col size of matrix
- Return value: Return to the pointer that point to the memory included the result of matrix
*/
int** add2Matrix(int** pArr1, int** pArr2, int szRow, int szCol){
    int i,j,m = 0;
    int **pSum = new int*[szCol];
    for(m = 0; m < szCol; m++){    
        pSum[m] = new int[szRow];
    }
    for(int i = 0; i<szRow; i++){
        for(int j = 0; j<szCol; j++){
            pSum[i][j] = pArr1[i][j] + pArr2[i][j];
        }
    }
    return pSum;
}
/*
Description: Display the result of addition of two matrices
'Parameter
'- pArr: The pointer points to the alocated memory in importData()
- szRow: the Row size of matrix
- szCol: the Col size of matrix
- Return value: void
*/
void printMatrix(int** pArr, int szRow, int szCol){
    cout<<"Sum of two arrays: " << endl;
    for(int i = 0; i < szRow; i++){
        for(int j = 0; j < szCol; j++){
            cout<<"\nEnter Arr["<<i<<"]"<<"["<<j<<"]: ";
            cout<< pArr[i][j];
        }
    }
}
/*
Description: free the allocated memories
'Parameter
'- pArr: The pointer points to the alocated memory in importData()
- szRow: the Row size of matrix
- szCol: the Col size of matrix
- Return value: void
*/
void freeMem(int** pArr, int szRow, int szCol){
    int i = 0;
    for(i = 0; i<szRow; i++){
        delete[]pArr;
    }
}
int main()
{
    int **pArr1, **pArr2;
    int row1, col1,row2,col2;
    cout << "Enter the size of pArr1(row/col): "<< endl;
    cin >> row1;
    cin >> col1;
    cout << "Enter the size of pArr2(row/col): " << endl;
    cin >> row2;
    cin >> col2;
    while(row1 != row2 || col1 != col2 ){
        cout << "2 matrix is not the same size! Pls try again!" << endl;
        cin >> row2;
        cin >> col2;
    }
    int **pTemp = new int*[col1];
    
    for(int m = 0; m < col1; m++){    
        pTemp[m] = new int[row1];
    }
    //2. Yeu cau nhap vao kich thuoc matrix NxM
    //3. Goi ham import de cap phat bo nho và data cho 2 matrix
    cout << "Enter the Arr1: " << endl;
    importData(&pArr1,row1,col1);
    cout << "Enter the Arr2: " << endl;
    importData(&pArr2,row2,col2);
    pTemp = add2Matrix(pArr1,pArr2,row1,col1);
    printMatrix(pTemp,row1,col1);
    freeMem(pArr1,row1,col1);
    freeMem(pArr2,row2,col2);
    freeMem(pTemp,row1,col1);
//   importData(…);
//   //4. Goi ham de cong 2 matrix
//   add2Matrix(...);
//   //5.goi ham de in ra ket qua cong 2 matrix
//   printMatrix(...);
//   //6. Free memory
//   freeMem(...);
}
