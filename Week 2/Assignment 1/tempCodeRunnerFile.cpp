ofstream outFile;
    string data;

    outFile.open("student.txt", ios::app);

    cout << "Enter your name: ";
    cin >> data;
    cout << "Enter your scores: ";
    cin >> data;
    cout << "Enter your average score: ";
    cin >> data;

    outFile.close();