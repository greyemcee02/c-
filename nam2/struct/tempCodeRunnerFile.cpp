cin >> q;
    
    string s;
    for(int i=0;i<q;i++){
        cin.ignore();
        getline(cin,s);
        for(int j=0;j<sodn;j++) if(s==dn[j].Name)
        in(dn[j].sv,dn[j].len);
    }