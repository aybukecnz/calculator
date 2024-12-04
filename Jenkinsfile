pipeline {
    agent any
    stages {
        stage('Checkout Code') {
            steps {
                git branch: 'main', url: 'https://github.com/aybukecnz/calculator.git'
            }
        }
        stage('Compile') {
            steps {
                sh 'g++ -o calculator calculator.cpp'
            }
        }
        stage('Run') {
            steps {
                sh './calculator'
            }
        }
    }
}
