import smtplib

sender = "sender@gmail.com"
receiver = " receiver@gmail.com"
password = "parola"
subject = "python email test"
body = "am scris un email din python"


# header
message = f"""From: {sender}
To: {receiver}
Subject: {subject}\n
{body}

"""

server = smtplib.SMTP("smtp.gmail.com", 587)
server.starttls()

try:
    server.login(sender,password)
    print("logged in...")

    server.sendmail(sender,receiver,message)
    print("email has been sent!")

except smtplib.SMTPAuthenticationError:
    print("unable to sign in")