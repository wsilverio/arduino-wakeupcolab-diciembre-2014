[wakeupcolab](http://www.wakeupcolab.com/)
===================
### mini{curso} de Arduino - lunes 15/12/2014

Por [Wendeurick Silverio](https://twitter.com/obelonave)

Este trabalho está licenciado com uma Licença [Creative Commons - Atribuição 4.0 Internacional](http://creativecommons.org/licenses/by/4.0/).  

![cc-by](https://i.creativecommons.org/l/by/4.0/88x31.png)  

## AGENDA  

* Apresentação do minicurso
* [GIT](#github)
* [Arduino](#arduino)
* [Sublime Text](#sublime-text)
* [História](#historia)
	* Software Livre
	* Open Source
	* Open Sorce Hardware e Hardware Livre
* [História do Arduino](#historia-do-arduino)
* Bate papo

## GIT
Git é um sistema de controle de versão, desenvolvido por Linus Torvalds (criador do Linux). Usaremos esta ferramenta para trocar informações com o site [GitHub](https://github.com/).
####instalação
- [Guia oficial](https://help.github.com/articles/set-up-git/)
- Crie uma conta no [GitHub](https://github.com/)
- [Baixe e instale a última versão do Git](http://git-scm.com/downloads)  

#### configuração
As configurações serão feitas via linha de comando. Para acessar o terminal:
* **Windows:** menu iniciar -> Git Bash  
* **Mac Os:** Spotlight -> Terminal  
* **Linux¹:** :baby_bottle:


No terminal
- entre com seu nome
	- `git config --global user.name "seu nome"`
- entre com seu email
	- `git config --global user.email seu@email.com`
- Por padrão, o Git armazena sua senha por 15 min. Caso queira alterar o intervalo, entre com (tempo em segundos):
	- `git config --global credential.helper cache`
	- `git config --global credential.helper 'cache --timeout=3600'`

#### clonando o repositório do curso
* Dica: organize seus códigos em um **sketchbook**. Vamos criar os diretórios via linha de comando, mas nada impede de fazer isso pela interface gráfica (botão direito, nova pasta, ...).  
Os comandos a seguir são derivados de sistemas Unix-like. No Windows, o Git Bash é quem faz o papel de interpretá-los.  
Resumo dos comandos:  
-`mkdir`: para criar diretórios (make directories)  
-`cd`: para navegar entre diretórios (change directory)  
-`ls`: para listar o conteúdo de diretórios (list directory contents)  
-`git`: para acessar a ferramenta Git  
-`~/`: indica o diretório do usuário (**/home/usuario**: para Linux e Mac Os, e **C:\Users\usuario**: para Windows)  

* crie o sketchbook dentro da pasta do usuário (~/)  
	- `mkdir ~/sketchbook`  
* crie o sketchbook do Arduino  
	- `mkdir ~/sketchbook/Arduino`
* navegue até o diretório
	- `cd ~/sketchbook/Arduino`
- clone o [repositório do curso](https://github.com/wsilverio/arduino-wakeupcolab-diciembre-2014)
    - `git clone https://github.com/wsilverio/arduino-wakeupcolab-diciembre-2014.git`
- navegue até o clone do repositório e exiba seu conteúdo
    - `cd arduino-wakeupcolab-diciembre-2014`
    - `ls`


- exemplo de estrutura de um sketchbook
	- ~/
		- sketchbook/
			- **Arduino/**
                - arduino-wakeupcolab-diciembre-2014/
					- lunes
					- martes
						- mastes1
						- martes2
				- luminariaRGB/
				- time_lapse/
			- **Python/**
				- post_facebook/
				- teste_twitter/
			- **C++/**
				- openCV/
					- filtro2D/

## ARDUINO
#### instalação
* Baixe a última versão do **Arduino IDE**
* Instale seguindo estas instruções
    - [Linux](http://playground.arduino.cc/Learning/Linux)
        - não esqueça dos grupos
            - `sudo usermod -aG dialout usuario`
            - `sudo usermod -aG tty usuario`
    - [Mac Os](http://arduino.cc/en/Guide/MacOSX)
    - [Windows](http://arduino.cc/en/Guide/Windows)
        - não esqueça dos drivers :thumbsup:

## SUBLIME TEXT
O Sublime Text é um editor de texto e código-fonte que usaremos como "IDE" para os sketches do Arduino.
#### instalação e configuração
* Baixe e instale o [Sublime Text](http://www.sublimetext.com/)
    - Debian/Ubuntu/Mint: [ppa:webupd8team/sublime-text-2](http://www.webupd8.org/2011/03/sublime-text-2-ubuntu-ppa.html)
    - Debian/Ubuntu/Mint: [ppa:webupd8team/sublime-text-3](http://www.webupd8.org/2013/07/sublime-text-3-ubuntu-ppa-now-available.html)  


- Instale o [Package Control](https://sublime.wbond.net/installation)
    - Copie o código do campo Sublime Text 2/3
    - Deixe visível o console do Sublime Text
        - View -> Show Console
        - Cole o código de instalação, pressione ENTER e aguarde a conclusão
            - Caso o programa acuse algum erro, verifique se você selecionou a versão correta
                - Help -> About Sublime Text -> Build **3**065
        - Reinicie o Sublime Text


- Instale e configure o plugin [Stino](http://robot-will.github.io/Stino/) no Sublime Text
    - Preferences -> Package Control -> Install Package
    - aguarde a exibição da lista de plugins
    - instale o Arduino-like IDE
    - se o menu Arduino não estiver disponível
        - Preferences -> Show Arduino Menu  
    - aponte o Stino para o diretório do Arduino
        - Arduino -> Preferences -> Select Arduino Application Folder
            - Linux: `/usr/share/arduino/`
            - Windows: `C:\Program Files (x86)\Arduino\`
            - Mac Os:  `/Applications/Arduino.app`
        - Arduino -> Preferences -> Change Sketchbook Folder
            - Linux e Mac Os:
            	- `~/sketchbook/Arduino/`
            - Windows
            	- `C:\Users\usuario\sketchbook\Arduino`


- Teste o exemplo **blink.ino**
    - conecte a placa Arduino ao computador
        - o led *power* deverá acender
    - selecione seu modelo de placa no Sublime Text
        - Arduino -> Arduino AVR Boards -> *sua placa*
    - selecione a porta de comunicação
        - Arduino -> Serial Port
            - Linux: `/dev/ttyUSB*` ou `/dev/ttyACM*`
            - Windows: `COM*`
            - Mac Os:  `/dev/tty.usbmodem*` ou `/dev/tty.usbserial*`
    - abra o exemplo *blink*
        - Arduino -> Examples -> General -> 01.Basics -> Blink
    - compile o sketch
        - Arduino -> Verify/Compile
    - grave o programa na placa
        - Arduino -> Upload
    - :metal:

## BATE PAPO
### HISTORIA
* Surgimento do movimento Software Livre
	- Contexto
	- Questão social
	- [4 liberdades](https://www.gnu.org/philosophy/free-sw.pt-br.html)

* Surgimento do movimento Open Source
	- Contexto
	- Questão comercial

* Surgimento dos movimentos Open Sorce Hardware e Hardware Livre
	* Contexto
	* Problema da definição

* Além do código
	- Arte
	- Mecânica
	- Biologia
	- Farmácia

* Além dos fóruns e listas de e-mail
	- Laboratórios colaborativos e Hackerspaces

### HISTORIA DO ARDUINO
- [Arduino O Documentário (2010)](http://vimeo.com/31389230)
- Interaction Design Institute Ivrea (Itália)
	- [Processing](https://processing.org/)
		- Documentário [Hello World! Processing](http://www.7luas.com.br/todos/pesquisa/artigo/hello-world-processing/)
	- [Wiring](http://wiring.org.co/)
		- Facultad de Arquitectura y Diseño de la Universidad de Los Andes (Colômbia)
<br />
<br />
***  

> * [1]: na verdade, as distribuições são [GNU/Linux](https://www.gnu.org/)
