##Requisitos:
git 2.30.2
python 3.8.11 (IMPORTANTE: Incluir en la instalacion el comando "pip")

probado en fedora 33

###paso 1: clonar el repositorio
####1.1.- Abrir la terminal
####1.2.- Explorar las carpetas hasta llegar a la carpeta donde se desea clonar el repositorio
####1.3.- escribimos el comando `git clone https://github.com/cavesdev/pavi.git` y esperamos a que termine

paso 2: instalamos un entorno virtual
2.1.- Accedemos a la carpeta del repositorio clonado
2.2.- Ejecutamos el comando `python3.8 -m venv venv/` y esperamos a que termine (IMPORTANTE: En caso de tener mas de una version de python instalada, es primordial que cada que se quiera ejecutar algun comando de python sea con python3.8, pues es la ultima version compatible con las demas dependencias)


paso 3: instalar los requerimientos de ambiente
3.1.- Ejecutamos el entorno virtual con `source venv/bin/activate`
3.2.- Ejecutamos el comando `pip install -r requirements-dev.txt`

paso 4: Ejecutamos la app
4.1.- Primero creamos un archivo con el nombre `.env` y lo guardamos en la carpeta principal (Donde se encuentra el archivo run.py) con el siguiente contenido:
```
DB_USER = admin-pavi
DB_PASSWORD = paviPassword
DB_HOST = pavi.eywsg.azure.mongodb.net
DB_NAME = pavi
DB_COLLECTION = videos

FLASK_ENV = development
FLASK_RUN_PORT = 5000
```
4.2.- Ejecutamos la app con el comando `python3.8 run.py`

NOTA: Por el momento si ejecutamos la aplicacion puede tirar el error 404, todavia estoy trabajando en la solucion del mismo
