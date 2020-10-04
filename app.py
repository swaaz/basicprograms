from flask import Flask,session,flash,render_template,redirect,session,url_for,request

app = Flask(__name__)
# UPLOAD_FOLDER = r'.\uploads'
# DOWNLOAD_FOLDER = r'.\downloads'
# TEMP_FOLDER = './temps'
app.secret_key = 'awedfrtyyyrwwe'
# app.config['UPLOAD_FOLDER'] = UPLOAD_FOLDER
# app.config['DOWNLOAD_FOLDER'] = DOWNLOAD_FOLDER
# app.config['TEMP_FOLDER'] = TEMP_FOLDER

@app.route('/')
def main():
    return render_template('index.html')


if __name__ == "__main__":
    app.run()