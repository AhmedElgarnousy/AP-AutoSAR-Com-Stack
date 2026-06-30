import pyrebase
import serial
import pynmea2

firebaseConfig={
    "apiKey": "AIzaSyBWfXrtFLadWWGa-j2f3OEljkGs_BFTHKk",

    "authDomain": "gps-tracker2-2c40b.firebaseapp.com",
    
    "databaseURL": "https://gps-tracker2-2c40b-default-rtdb.firebaseio.com",
    
    "projectId": "gps-tracker2-2c40b",

    "storageBucket": "gps-tracker2-2c40b.appspot.com",

    "messagingSenderId": "1032593396123",

    "appId": "1:1032593396123:web:c8039d6ecf972d8ddd913e"
    }

firebase=pyrebase.initialize_app(firebaseConfig)
db=firebase.database()

while True:
        port="/dev/ttyAMA0"
        ser=serial.Serial(port, baudrate=9600, timeout=0.5)
        dataout = pynmea2.NMEAStreamReader()
        newdata=ser.readline()
        n_data = newdata.decode('latin-1')
        if n_data[0:6] == '$GPRMC':
                newmsg=pynmea2.parse(n_data)
                lat=newmsg.latitude
                lng=newmsg.longitude
                gps = "Latitude=" + str(lat) + " and Longitude=" + str(lng)
                print(gps)
                data = {"LAT": lat, "LNG": lng}
                db.update(data)
                print("Data sent")
