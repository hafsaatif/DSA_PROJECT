#include<iostream>
using namespace std;
class item{
	public:
	string data1;
	item* next;
};
class Node{
	public:
	int id;
	item* next;
};
class link_list{
	private:
		Node* head;
		public:
			link_list():head(NULL){}
			void insert_at_beg(int value)
			{
				Node* abc=new Node();
				abc->id=value;
				abc->next=NULL;
				head=abc;
			}
				void insert_at_end(string value)
			{
				item* abc=new item();
				abc->data1=value;
				abc->next=NULL;
				Node* temp1=head;
			if(temp1->next==NULL)
			temp1->next=abc;
			else
			{
				item* temp=temp1->next;
			while(temp->next!=NULL)
			{
				temp=temp->next;
				}
				temp->next=abc;	
			}
		}
			void print()
			{
			Node* temp1=head;
		
			item* temp=temp1->next;
				while(temp!=NULL)
				{
				cout<<temp->data1<<"      ";
				temp=temp->next;
				}
					cout<<temp1->id;
				cout<<endl<<"-----------------"<<endl;
					
			}
			void edit(string input)
			{
				string replace;
			item* temp=head->next;
			if(temp->next->data1==input)
			{
					cout<<"edit expense : ";
				while(temp!=NULL)
				{
				
			cin>>replace;
			temp->data1=replace;
			temp=temp->next;	
				}
				}	
			}
			int delete_expense(string input)
			{
     			int n=0;
			item* temp=head->next;
				while(temp!=NULL)
				{
		        if(temp->data1==input)
		      	{
		     	n=1;
			    return n;	
			     }
				temp=temp->next;	
				}
			}
			bool operator <(link_list c)
			{
				cout<<endl<<endl<<"Expensive item is : "<<endl<<endl;
					cout<<"id     "<<" item   quantity    date        price"<<endl;
			bool n=false;
			item* temp=head->next;
			item* temp1=c.head->next;
			if(head->id>c.head->id)
			{
				while(temp!=NULL)
				{
				cout<<temp->data1<<"      ";
				temp=temp->next;
				}
				cout<<head->id<<endl;
//				cout<<temp->id<<" "<<temp->next->data1<<"  "<<temp->next->next->data1<<endl<<endl;
				n=true;
				}	
				else
				{
			
					while(temp1!=NULL)
				{
				cout<<temp1->data1<<"      ";
				temp1=temp1->next;
				}
				cout<<c.head->id<<endl;
//				cout<<temp->id<<" "<<temp->next->data1<<"  "<<temp->next->next->data1<<endl<<endl;
				n=true;
				}	
				
				//cout<<temp1->id<<" "<<temp1->next->data1<<"  "<<temp1->next->next->data1<<endl<<endl;	

			return n;	
			}
					
};
int main()
{
	cout<<"                 -------------------------------"<<endl;
	cout<<"                 |   EXPENSE TRACKING APP       |                     "<<endl;
	cout<<"                 -------------------------------"<<endl<<endl<<endl;
		cout<<"id     "<<" item   quantity    date        price"<<endl;
	int j=0,j1=0;
		int k;
	
	link_list* l1=new link_list();
	link_list* l=new link_list();
l->insert_at_beg(1200);
l->insert_at_end("1");
l->insert_at_end("rice");
l->insert_at_end("1kg");
l->insert_at_end("4-05-2024");
l->print();
int press=1;
while(press!=5)
{
int choice;
cout<<endl<<endl<<"****************************************"<<endl;
cout<<"* 1- Add expense                       * "<<endl<<"* 2- View all expnse                   *"<<endl<<"* 3- Generate a report                 *"<<endl;
cout<<"****************************************"<<endl<<endl<<endl;
cout<<"enter  choice ";
cin>>choice;
switch(choice)
{
//if(choice==1)
case 1:
{
	cout<<"1- New expense "<<endl<<"2- Edit expense "<<endl<<"3- delete enpense "<<endl;
	int expense_choice;
	cout<<"enter choice : ";
	cin>>expense_choice;
	if(expense_choice==1)
	{
		int data;
		string expense_data;
		cout<<"price : ";
cin>>data;
l1->insert_at_beg(data);
	l1->insert_at_end("3");
		cout<<"item: ";
		cin>>expense_data;
l1->insert_at_end(expense_data);
cout<<"quantity : ";
cin>>expense_data;
l1->insert_at_end(expense_data);
cout<<"date : ";
cin>>expense_data;
l1->insert_at_end(expense_data);
cout<<endl;
l1->print();	
	}
	else if(expense_choice==2)
	{
	string user;
	cout<<"which item you want to edit : ";
	cin>>user;
	l1->edit(user);
	l->edit(user);	
	}
	else{
		//delete
		string user1;
	cout<<"which item you want to delete : ";
	cin>>user1;
	k=l1->delete_expense(user1);
	if(k==1)
	{
		delete l1;
		cout<<"deleted ";
		j1=1;	
	}
		k=l->delete_expense(user1);	
		 if(k==1)
    {
	delete l;
	j=1;
	 }	
	}		
break;	
}
case 2:
{
	if(j!=1 && j1!=1){
			l->print();
			l1->print();	
	}
	 else if(j1!=1)
	{
		l1->print();	
	}
	else 
	{
		l->print();
	}
	break;
}
case 3:
	{
if(*l<*l1)
{
cout<<endl<<endl;	
}
cout<<endl<<endl;
	}
}
//generate a report 
cout<<"press 5 to exit : ";
cin>>press;
}
}
