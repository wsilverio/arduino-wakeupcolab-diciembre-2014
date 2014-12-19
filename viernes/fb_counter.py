# -*- coding: UTF-8 -*-

# importa a biblioteca para o delay
from time import sleep
# importa a biblioteca fbconsole
import fbconsole as fb
# importa a biblioteca para a comunicacao serial
import serial

try:
	fb.logout()
except:
	pass

# permissao e autenticacao do facebook
fb.AUTH_SCOPE = ['publish_stream', 'publish_checkins']
fb.authenticate()

# post a ser analisado
id_user = '100002198202486'
id_post = '756280991121834'
post = {'id': '%s_%s' %(id_user, id_post)}
#post = fb.post('/me/feed', {'message':'Olá, esta é uma mensagem automática enviada via Python'})
#post = fb.post('/me/photos', {'source':open('foto.jpg')})

# endereco da porta serial
port = '/dev/ttyUSB0' # substitua por 'COM3' (Windows), ou '/dev/tty.usbmodem1d11' (Mac) - por exemplo
# velocidade
bps = 9600

# inicializa a porta serial
ser = serial.Serial(port, bps)

while True:
	likes = fb.get('/'+post['id']+'/likes')

	total_likes = str(likes).count("name")
	print "Total likes: ", total_likes

	if ser.isOpen() == False:
		ser.open()
	
	ser.write(str(total_likes))
	ser.close()

	sleep(10)