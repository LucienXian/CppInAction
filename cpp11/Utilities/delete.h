template <typename T>
class ComplexNumber
{
	T x;
	T y;
public:
	ComplexNumber(T a, T b) : x(a) , y(b)
	{}
	void display()
	{
		std::cout<<x << " + i"<<y<<std::endl;
	}
        // Deleted template specialisation 
	//ComplexNumber(char a, char b) = delete;
        // Deleted template specialisation  
	ComplexNumber(double a, double b) = delete;
};