{
    string alfabeto="abcdefghijklmnopqrstuvwxyz";
    int clave_publica=7;
    string mensaje="hola";
    for(int i=0; i<mensaje.size(); i++){
        int pos= alfabeto.find(mensaje[i]);
        int clave_privada=modinv(clave_publica,26);
        int cifrar=modulo(pos*clave_publica,26);
        int desci=modulo(cifrar*clave_privada,26);
        mensaje[i]=alfabeto[cifrar];
//        cout<<mensaje<<endl;
        mensaje[i]=alfabeto[desci];
//        cout<<mensaje<<endl;
    }
    cout<<mensaje<<endl;

}
