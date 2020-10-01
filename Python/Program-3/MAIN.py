import time
from plyer import notification
if __name__=="__main__":
    while True:
        notification.notify(
            title = "HEADING HERE",
            message=" DESCRIPTION HERE" ,
            timeout=2 #displaying time
            #you can also choose an icon
        )
        time.sleep(7) #waiting time
