

class Person
{
    public:
    char name[100];
    int age;
    virtual void getdata(){}
    virtual void putdata(){}
};
static int cur_id1,cur_id2;
class Professor:public Person
{
    public:
    int publications;
    
    
    void getdata()
    {
        cin>>name;
        cin>>age>>publications;
        
    }
    void putdata()
    {
        cout<<name<<" "<<age<<" "<<publications<<" "<<++cur_id1<<endl;
    }
};

class Student:public Person
{
    public:
    int marks[6],s=0;
    
    
    void getdata()
    {
        cin>>name;
        cin>>age;
        
        for(int i=0;i<6;i++)
        {cin>>marks[i];
        s+=marks[i];
        }
        
    }
    void putdata()
    {
        cout<<name<<" "<<age<<" "<<s<<" "<<++cur_id2<<endl;
    }
};


