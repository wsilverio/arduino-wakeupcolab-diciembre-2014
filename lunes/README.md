[wakeupcolab](http://www.wakeupcolab.com/)
===================
### mini{curso} de Arduino - lunes 15/12/2014

Por [Wendeurick Silverio](https://twitter.com/obelonave)

Este trabalho está licenciado com uma Licença [Creative Commons - Atribuição 4.0 Internacional](http://creativecommons.org/licenses/by/4.0/).  

![cc-by](https://i.creativecommons.org/l/by/4.0/88x31.png)  

## AGENDA  

* apresentação do minicurso
* [GIT](#github)
* [Arduino](#arduino)
* [Sublime Text](#sublime-text)
* [história](#historia)
	* Software Livre
	* Open Source
	* Open Sorce Hardware e Hardware Livre
* [história do Arduino](#historia-do-arduino)
* bate papo

## GITHUB
####instalação
- [guia oficial](https://help.github.com/articles/set-up-git/)
- crie uma conta no [GitHub](https://github.com/)
- [baixe e instale a última versão do Git](http://git-scm.com/downloads)  

#### configuração

* no terminal
    - entre com seu nome
        - `$ git config --global user.name "seu nome"`
    - entre com seu email
        - `$ git config --global user.email seu@email.com`
    - Por padrão, o Git armazena sua senha por 15 min. Caso queira alterar o intervalo, entre com (tempo em segundos):
        - `git config --global credential.helper cache`
        - `git config --global credential.helper 'cache --timeout=3600'`

#### clonando o repositório do curso
* no GitHub, acesse o [repositório do curso](https://github.com/wsilverio/arduino-wakeupcolab-diciembre-2014.git)
    - copie o link de clone via HTTPS
        - `https://github.com/wsilverio/arduino-wakeupcolab-diciembre-2014.git`
* dica: organize seus códigos em um *sketchbook*:
    * crie o sketchbook dentro da pasta do usuário (~/)  
        - `$ mkdir ~/sketchbook`  
    * crie o sketchbook do Arduino  
        - `$ mkdir ~/sketchbook/Arduino`
    * navegue até o diretório
        - `$ cd ~/sketchbook/Arduino`
- clone o repositório do curso
    - `$ git clone https://github.com/wsilverio/arduino-wakeupcolab-diciembre-2014.git`
- navegue até o clone do repositório e exiba seu conteúdo
    - `$ cd arduino-wakeupcolab-diciembre-2014`
    - `$ ls`
- exemplo de estrutura de um sketchbook
    - ~/
        - sketchbook/
            - Arduino/
                - arduino-wakeupcolab-diciembre-2014/
                    - programa1
                    - programa2
                - luminariaRGB/
                - time_lapse/
            - Python/
                - post_facebook/
                - teste_twitter/
            - Cpp/
                - openCV/
                    - filtro2D/

## ARDUINO
#### instalação
* baixe a última versão do **Arduino IDE**
* instale seguindo estas instruções
    - [GNU/Linux](http://playground.arduino.cc/Learning/Linux)
        - não esqueça dos grupos
            - `sudo usermod -aG dialout usuario`
            - `sudo usermod -aG tty usuario`
    - [Mac OS](http://arduino.cc/en/Guide/MacOSX)
    - [Windows](http://arduino.cc/en/Guide/Windows)
        - não esqueça dos drivers :thumbsup:

## SUBLIME TEXT
#### instalação e configuração
* baixe e instale o [Sublime Text](http://www.sublimetext.com/)
    - Debian/Ubuntu/Mint: [ppa:webupd8team/sublime-text-2](http://www.webupd8.org/2011/03/sublime-text-2-ubuntu-ppa.html)
    - Debian/Ubuntu/Mint: [ppa:webupd8team/sublime-text-3](http://www.webupd8.org/2013/07/sublime-text-3-ubuntu-ppa-now-available.html)  


- instale o [Package Control](https://sublime.wbond.net/installation)
    - copie o código do campo Sublime Text 2/3
    - deixe visível o console do Sublime Text
        - View -> Show Console
        - cole o código de instalação, pressione ENTER e aguarde a conclusão
            - caso o programa acuse algum erro, verifique se você selecionou a versão correta
                - Help -> About Sublime Text -> Build **3**065
        - reinicie o Sublime Text


- instale e configure o plugin [Stino](http://robot-will.github.io/Stino/) no Sublime Text
    - Preferences -> Package Control -> Install Package
    - aguarde a exibição da lista de plugins
    - instale o Arduino-like IDE
    - se o menu Arduino não estiver disponível
        - Preferences -> Show Arduino Menu  
    - Aponte o Stino para o diretório do Arduino
        - Arduino -> Preferences -> Select Arduino Application Folder
            - GNU/Linux: `/usr/share/arduino/`
            - Windows: `C:\Program Files (x86)\Arduino\`
            - Mac:  `/Applications/Arduino.app`
        - Arduino -> Preferences -> Change Sketchbook Folder
            - GNU/Linux e Mac:
            	- `~/sketchbook/Arduino/`
            - Windows
            	- `C:\Users\usuario\sketchbook\Arduino`


- teste o exemplo **blink.ino**
    - conecte a placa Arduino ao computador
        - o led *power* deverá acender
    - selecione seu modelo de placa no Sublime Text
        - Arduino -> Arduino AVR Boards -> *sua placa*
    - selecione a porta de comunicação
        - Arduino -> Serial Port
            - GNU/Linux: `/dev/ttyUSB*` ou `/dev/ttyACM*`
            - Windows: `COM*`
            - Mac:  `/dev/tty.usbmodem*` ou `/dev/tty.usbserial*`
    - abra o exemplo *blink*
        - Arduino -> Examples -> General -> 01.Basics -> Blink
    - compile o sketch
        - Arduino -> Verify/Compile
    - grave o programa na placa
        - Arduino -> Upload
    - :metal:

## HISTORIA
* surgimento do movimento Software Livre
	- contexto
	- questão social
	- [4 liberdades](https://www.gnu.org/philosophy/free-sw.pt-br.html)

* surgimento do movimento Open Source
	- contexto
	- questão comercial

* surgimento dos movimentos Open Sorce Hardware e Hardware Livre
	* contexto
	* problema da definição

* além do código
	- arte
	- mecânica
	- biologia
	- farmácia

* além dos fóruns e listas de e-mail
	- laboratórios colaborativos e Hackerspaces

## HISTORIA DO ARDUINO
- [Arduino O Documentário (2010)](http://vimeo.com/31389230)
- Interaction Design Institute Ivrea (Itália)
	- [Processing](https://processing.org/)
	- [Wiring](http://wiring.org.co/)
		- Facultad de Arquitectura y Diseño de la Universidad de Los Andes (Colômbia)

## BATE PAPO