#include <iostream>
using namespace std;

int arr[100], n = 100, front_element = - 1, rear_element = - 1;

void Insert_element()
{
    int value;
    if (rear_element == n - 1)
        cout<<"Queue Overflow"<<endl;
    else
    {
        if (front_element == - 1)
            front_element = 0;
        cout<<"Insert the element in queue : "<<endl;
        cin>>value;
        rear_element++;
        arr[rear_element] = value;
    }
}

void Delete_element()
{
    if (front_element == - 1 || front_element > rear_element)
    {
        cout<<"Queue Underflow ";
        return ;
    }
    else
    {
        cout<<"Element deleted from queue is : "<< arr[front_element] <<endl;
        front_element++;;
    }
}

void Display()
{
    if (front_element == - 1)
        cout<<"Queue is empty"<<endl;
    else
    {
        cout<<"Queue elements are : ";
        for (int i = front_element; i <= rear_element; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
}

int main()
{
    int choice;
    cout<<"1) Insert element to queue"<<endl;
    cout<<"2) Delete element from queue"<<endl;
    cout<<"3) Display all the elements of queue"<<endl;
    cout<<"4) Exit"<<endl;
    do
    {
        cout<<"Enter your choice : "<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            Insert_element();
            break;
        case 2:
            Delete_element();
            break;
        case 3:
            Display();
            break;
        case 4:
            cout<<"Exit"<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
        }
    }
    while(choice!=4);
    return 0;
}
