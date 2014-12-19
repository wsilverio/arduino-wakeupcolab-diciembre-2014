#### python
- **Windows**
	- Download Python 2.7.9
		- https://www.python.org/downloads/
		- next > next > ... > marcar a instalação do Pip > finish
- Linux e Mac Os
	- (:

#### pip
- Windows
	- (:
- Mac Os
	- no terminal, tente
		- `sudo easy_install pip`
		- ou
		- `brew install python`
		- caso dê certo, pule para o **pyserial**
	- Baixar o [get-pip.py](https://bootstrap.pypa.io/get-pip.py)
		- requer permissões de adm
	- no Terminal
		- navegar até o download
			- `cd` e `ls`
		- executar
			- `python get-pip.py`
			- ou
			- `sudo python get-pip.py`

#### pyserial
- Windows
	- menu iniciar -> cmd.exe (prompt de comando)
		- `pip install pyserial`
	- abrir o Python IDLE ou o Python Command Line
	- `import serial`
	- (:
- Mac Os
	- terminal
		- `pip install pyserial`
		- ou
		- `easy_install -U pyserial`
		- ou
		- baixar http://pypi.python.org/pypi/pyserial
			- `tar -xzf pyserial-[...].tar.gz`
			- `sudo python setup.py install`
		- abrir o interpretador Python
			- `python`
		- verificar a biblioteca
			- `import serial`

#### fbconsole
- Windows
	- cmd (prompt)
- Mac Os
	- terminal
 

- `pip install fbconsole`
- ou
- Download https://pypi.python.org/pypi/fbconsole
- descompactar
- `python setup.py install`
- ou
- `sudo python setup.py install`

testar importando a biblioteca no python
- `import fbconsole`