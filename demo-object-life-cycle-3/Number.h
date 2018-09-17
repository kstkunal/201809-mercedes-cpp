


class Number
{
    int value;
public:
    Number(int value)
    {
        this->value=value;
        cout<<"constructor: Number("<<value<<") called"<<endl;
    }

    Number()
    {
        this->value=0;
        cout<<"constructor: Number() called"<<endl;
    }

    Number(Number & number)
    {
        value=number.value;
        cout<<"constructor: copy constructor called "<<endl;
    }

    ~Number()
    {

        cout<<"Destroyed: Number("<<value<<")"<<endl;
    }

    int get(){return value;}

    void set(int newValue)
    {
        value=newValue;
    }

    void increment()
    {
        value++;
    }
};

