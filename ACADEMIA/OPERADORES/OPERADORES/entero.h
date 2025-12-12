
class Entero
{
	private:
		int valor_;

	public:

		//CONSTRUCTOR VACÍO QUE INICIALIZA A CERO EL ENTERO
		Entero()
		{
			valor_ = 0;
		}

		//CONSTRUCTOR PARAMETRIZADO QUE RECIBE UN ENTERO
		Entero(int valor)
		{
			valor_ = valor;
		}

		//CONSTRUCTOR DE COPIA
		Entero(const Entero &n)
		{
			valor_ = n.valor_;
		}

		//OBSERVADOR DE LA VARIABLE ENTERA
		int get()
		{
			return valor_;
		}

		//MODIFICADOR DE LA VARIABLE ENTERA
		void set(int valor)
		{
			valor_ = valor;
		}

		//OPERADOR SUFIJO
		Entero &operator++(int)
		{
			valor_ += 1;
			return *this;
		}

		//OPERADOR SUMA PREFIJO
		Entero &operator++(void)
		{
			valor_ += 1;
			return *this;
		}

		//OPERADOR SUMA QUE RETORNA UN INT 3+N
		friend int operator+(int n, Entero num)
		{
			return n + num.valor_;
		}

		//OPERADOR RESTA QUE RETORNA UN INT N-3
		friend int operator-(Entero num, int n)
		{
			return num.valor_ - n;
		}

		//OPERADOR SUMA QUE RETORNA UN ENTERO
		Entero operator+=(int n)
		{
			valor_ = valor_ + n;
			return *this;
		}

		//OPERADOR ASIGNACION INT
		Entero operator=(int n)
		{
			valor_ = n;
			return *this;
		}
		

		//OPERADOR ASIGNACION ENTERO
		Entero operator=(Entero num)
		{
			valor_ = num.valor_;
			return *this;
		}
};