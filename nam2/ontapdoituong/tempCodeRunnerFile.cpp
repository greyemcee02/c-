for(int i = 0; i < slhd; i++){
        cout << "HD" << setw(3) << setfill('0') << i+1;
        cout << " ";
        int mkh = hd[i].getkh();
        int mmh = hd[i].getmh();
        cout << kh[mkh] << mh[mmh];
        int sl = hf[i].getsl();
        cout << sl << " " << sl*mh[mmh].getban() << endl;
    }