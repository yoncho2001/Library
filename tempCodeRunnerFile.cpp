std::ofstream userOut;
    userOut.open("Users.txt");
    a.saveToFileUser(userOut);
    userOut.close();