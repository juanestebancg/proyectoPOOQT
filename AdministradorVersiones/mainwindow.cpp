#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->fieldCrear->hide();
    ui->fieldObtener->hide();
    ui->fieldModificar->hide();
    ui->fieldDiferencia->hide();
    ui->okCrear->hide();
    ui->okObtener->hide();
    ui->okModificar->hide();
    ui->okDiferencia->hide();
    ui->msjCrear->hide();
    ui->mErrorT->hide();
    ui->mErrorD->hide();
    ui->msjMod->hide();
    ui->selectVersion->hide();
    ui->okModificar2->hide();
    ui->infoMod->hide();
    ui->tInfoMod->hide();
    ui->tVersion->hide();
    ui->infoVer->hide();
    ui->errorOb->hide();
    ui->errorMod->hide();
    ui->errorCrear->hide();
    ui->fieldHist->hide();
    ui->titleHist->hide();
    ui->fieldDif2->hide();
    ui->infoDif1->hide();
    ui->infoDif2->hide();
    ui->showDifs->hide();
    ui->titleDif->hide();
    ui->errorDif->hide();

    flag = false;

}

MainWindow::~MainWindow()
{
    delete ui;
}

class verificar_entero : public exception{
    public:
        const char* what() const throw(){
            return "Porfavor ingrese un entero del 1 al 5";
        }

};

class verificar_version : public exception{
    public:
        const char* what() const throw(){
            return "Porfavor ingrese una version que se encuentre en el historial";
        }

};

class verificar_archivo : public exception{
    public:
        const char* what() const throw(){
            return "Porfavor ingrese un nombre valido para el archivo";
        }
};

class verificar_modificacion : public exception{
    public:
        const char* what() const throw(){
            return "Porfavor ingrese una version valida para modificar";
        }
};


void MainWindow::on_btnCrear_clicked(){
    ui->fieldObtener->hide();
    ui->fieldModificar->hide();
    ui->fieldDiferencia->hide();
    ui->okObtener->hide();
    ui->okModificar->hide();
    ui->okDiferencia->hide();
    ui->msjCrear->hide();
    ui->mErrorT->hide();
    ui->mErrorD->hide();
    ui->msjMod->hide();
    ui->selectVersion->hide();
    ui->okModificar2->hide();
    ui->infoMod->hide();
    ui->tInfoMod->hide();
    ui->tVersion->hide();
    ui->infoVer->hide();
    ui->errorOb->hide();
    ui->errorMod->hide();
    ui->errorCrear->hide();
    ui->fieldHist->hide();
    ui->titleHist->hide();
    ui->fieldDif2->hide();
    ui->infoDif1->hide();
    ui->infoDif2->hide();
    ui->showDifs->hide();
    ui->titleDif->hide();
    ui->errorDif->hide();

    ui->fieldCrear->show();
    ui->okCrear->show();
}

void MainWindow::on_btnDiferencia_clicked(){
    if(flag){
    ui->fieldObtener->hide();
    ui->fieldModificar->hide();
    ui->fieldCrear->hide();
    ui->okObtener->hide();
    ui->okModificar->hide();
    ui->okCrear->hide();
    ui->msjCrear->hide();
    ui->mErrorT->hide();
    ui->mErrorD->hide();
    ui->msjMod->hide();
    ui->selectVersion->hide();
    ui->okModificar2->hide();
    ui->infoMod->hide();
    ui->tInfoMod->hide();
    ui->tVersion->hide();
    ui->infoVer->hide();
    ui->errorOb->hide();
    ui->errorMod->hide();
    ui->errorCrear->hide();
    ui->fieldHist->hide();
    ui->titleHist->hide();
    ui->fieldDif2->hide();
    ui->showDifs->hide();
    ui->titleDif->hide();
    ui->showDifs->clear();
    ui->errorDif->hide();

    ui->fieldDiferencia->show();
    ui->okDiferencia->show();
    ui->fieldDif2->show();
    ui->infoDif1->show();
    ui->infoDif2->show();
    }else{
        ui->mErrorT->show();
        ui->mErrorD->show();

    }
}

void MainWindow::on_btnHistorial_clicked(){
    ui->fieldObtener->hide();
    ui->fieldModificar->hide();
    ui->fieldCrear->hide();
    ui->okObtener->hide();
    ui->okModificar->hide();
    ui->okCrear->hide();
    ui->msjCrear->hide();
    ui->mErrorT->hide();
    ui->mErrorD->hide();
    ui->msjMod->hide();
    ui->selectVersion->hide();
    ui->okModificar2->hide();
    ui->infoMod->hide();
    ui->tInfoMod->hide();
    ui->tVersion->hide();
    ui->infoVer->hide();
    ui->errorOb->hide();
    ui->errorMod->hide();
    ui->errorCrear->hide();
    ui->fieldDiferencia->hide();
    ui->okDiferencia->hide();
    ui->fieldDif2->hide();
    ui->infoDif1->hide();
    ui->infoDif2->hide();
    ui->showDifs->hide();
    ui->titleDif->hide();
    ui->errorDif->hide();

        ui->titleHist->show();
        vector<Version> v1;
        vector<Subversion> v2;
        v1 = control.totalVersiones();
        string hist;
        for(int i = 0;i<v1.size();i++){
            hist+=v1[i].getNombre()+"\n";
            if(!(v1[i].getSubversiones().empty())){
                v2 = v1[i].getSubversiones();
                hist+="sub ";
                for(int j = 0; j<v2.size();j++){
                    hist+=v2[j].getID()+=" -> ";

                }
                hist+="\n";
            }
        }
        ui->fieldHist->setText(QString::fromStdString(hist));
        ui->fieldHist->show();
}

void MainWindow::on_btnObtener_clicked(){
    if(flag){
    ui->fieldCrear->hide();
    ui->fieldModificar->hide();
    ui->fieldDiferencia->hide();
    ui->okCrear->hide();
    ui->okModificar->hide();
    ui->okDiferencia->hide();
    ui->msjCrear->hide();
    ui->mErrorT->hide();
    ui->mErrorD->hide();
    ui->msjMod->hide();
    ui->selectVersion->hide();
    ui->okModificar2->hide();
    ui->infoMod->hide();
    ui->tInfoMod->hide();
    ui->tVersion->hide();
    ui->infoVer->hide();
    ui->errorOb->hide();
    ui->errorMod->hide();
    ui->errorCrear->hide();
    ui->fieldHist->hide();
    ui->titleHist->hide();
    ui->fieldDif2->hide();
    ui->infoDif1->hide();
    ui->infoDif2->hide();
    ui->showDifs->hide();
    ui->titleDif->hide();
    ui->errorDif->hide();

    ui->fieldObtener->show();
    ui->okObtener->show();
    }else{
        ui->mErrorT->show();
        ui->mErrorD->show();
    }
}

void MainWindow::on_btn_Modificar_clicked(){
    if(flag){
    ui->fieldObtener->hide();
    ui->fieldCrear->hide();
    ui->fieldDiferencia->hide();
    ui->okObtener->hide();
    ui->okCrear->hide();
    ui->okDiferencia->hide();
    ui->msjCrear->hide();
    ui->mErrorT->hide();
    ui->mErrorD->hide();
    ui->msjMod->hide();
    ui->fieldModificar->hide();
    ui->okModificar->hide();
    ui->infoMod->hide();
    ui->tInfoMod->hide();
    ui->tVersion->hide();
    ui->infoVer->hide();
    ui->errorOb->hide();
    ui->errorMod->hide();
    ui->errorCrear->hide();
    ui->fieldHist->hide();
    ui->titleHist->hide();
    ui->fieldDif2->hide();
    ui->infoDif1->hide();
    ui->infoDif2->hide();
    ui->showDifs->hide();
    ui->titleDif->hide();
    ui->errorDif->hide();

    ui->selectVersion->show();
    ui->okModificar2->show();
    ui->msjMod->show();
    }else{
        ui->mErrorT->show();
        ui->mErrorD->show();
    }
}

void MainWindow::on_okCrear_clicked(){
    fstream archivo;
    try{
            ui->errorCrear->hide();
            QString ftext = ui->fieldCrear->text();
            string nomProg = ftext.toUtf8().constData();
            archivo.open(nomProg.c_str(),ios::in);
            if(archivo.fail()) throw verificar_archivo();
            nomb_control = "s_"+nomProg;
            control.crear(nomProg,nomb_control);
            if(!control.getProg().getVersiones().empty()){
                ui->msjCrear->show();
                ui->fieldCrear->clear();
                flag = true;
            }else{

            }
            archivo.close();
        }
        catch(exception &e){
            string error = e.what();
            ui->errorCrear->setText(QString::fromStdString(error));
            ui->errorCrear->show();
            archivo.close();
        }

}

void MainWindow::on_okDiferencia_clicked(){

    QString ftext1 = ui->fieldDiferencia->text();
    QString ftext2 = ui->fieldDif2->text();
    string v1 = ftext1.toStdString();
    string v2 = ftext2.toStdString();
    try{
            if( v1.size()>7 ||
                     v2.size()>7 || (v1.size()==7 && v1[3] != '.') ||
                     (v2.size()==7 && v2[3] != '.')|| v1.size()==5 || v1.size() == 1 || v2.size() ==1 || v2.size()==5|| !validacion(v1) || !validacion(v2)) throw verificar_version();
            vector<string> vec1 = control.obtener(nomb_control,v1);
            while(vec1.empty()){
                cout<<"while1"<<endl;
                vec1 = control.obtener(nomb_control,v1);
            }
            vector<string> vec2 = control.obtener(nomb_control,v2);
            while(vec2.empty()){
                cout<<"while2"<<endl;
                vec2 = control.obtener(nomb_control,v2);
            }
            string temp,concat;
            QString add,tmp;
            vector<string> eliminadas;
            vector<string> insertadas;
            int intervaloe_nc1 = 0, intervaloe_nc2 = 1,intervaloe_nf1 = 1,intervalo_nf2 = 1;
            int intervaloi_nc1 = 1,intervaloi_nc2 = 1,intervaloi_nf1 = 1,intervaloi_nf2 = 1;
            for(int i = 0; i < vec2.size();i++ ){
                cout<<vec2[i]<<endl;
                cout<<vec1[i]<<endl;
                if(vec2[i] != vec1[i]){
                    intervaloi_nc1 = i;
                    intervaloi_nf1 = i+1;
                    intervaloi_nf2 = intervaloi_nf1;
                    intervaloe_nc1 = i+1;
                    intervaloe_nc2 = intervaloe_nc1;
                    cout<<"Hola"<<endl;
                    while(vec2[i] != vec1[i] && i<vec2.size() && i <vec1.size()){
                        cout<<"Hola"<<i<<endl;
                        intervaloe_nc2++;
                        intervaloi_nf2++;
                        eliminadas.push_back(vec1[i]);
                        insertadas.push_back(vec2[i]);
                        i++;
                    }
                    cout<<"Hola fuera"<<endl;
                    if(i<vec1.size() && vec2.size()<vec1.size()){
                        for(int j = i;j<vec1.size();j++){
                            intervaloe_nc2++;
                            eliminadas.push_back(vec1[j]);
                        }
                    }
                    if(i == vec2.size() || i == vec1.size()){
                        tmp = ui->showDifs->toPlainText();
                        concat = tmp.toStdString();
                        add = QString::fromStdString(concat+to_string(intervaloe_nc1)+"-"+to_string(intervaloe_nc2-1)+"e"+"\n");
                        ui->showDifs->setText(add);
                        cout<<intervaloe_nc1<<"-"<<intervaloe_nc2-1<<"e"<<endl;
                        for(int j = 0;j<eliminadas.size();j++){
                         tmp = ui->showDifs->toPlainText();
                         concat = tmp.toStdString();
                         add = QString::fromStdString(concat+"<"+eliminadas[j]+"\n");
                         ui->showDifs->setText(add);
                            cout<<"<"<<eliminadas[j]<<endl;
                        }
                    }
                    else{
                        tmp = ui->showDifs->toPlainText();
                        concat = tmp.toStdString();
                        add = QString::fromStdString(concat+to_string(intervaloe_nc1)+"-"+to_string(intervaloe_nc2-1)+"e"+to_string(i+1)+"\n");
                        ui->showDifs->setText(add);
                        cout<<intervaloe_nc1<<"-"<<intervaloe_nc2-1<<"e"<<i+1<<endl;
                        for(int j = 0;j<eliminadas.size();j++){
                            tmp = ui->showDifs->toPlainText();
                            concat = tmp.toStdString();
                            add = QString::fromStdString(concat+"<"+eliminadas[j]+"\n");
                            ui->showDifs->setText(add);
                            cout<<"<"<<eliminadas[j]<<endl;
                        }
                    }
                    if(i >= vec1.size()){
                        for(int j = i;j<vec2.size();j++){
                            intervaloi_nf2++;
                            insertadas.push_back(vec2[j]);
                            i++;
                        }
                    }
                    tmp = ui->showDifs->toPlainText();
                    concat = tmp.toStdString();
                    add = QString::fromStdString(concat+to_string(intervaloi_nc1)+"i"+to_string(intervaloi_nf1)+"-"+to_string(intervaloi_nf2-1)+"\n");
                    ui->showDifs->setText(add);
                        cout<<intervaloi_nc1<<"i"<<intervaloi_nf1<<"-"<<intervaloi_nf2-1<<endl;
                        for(int j = 0;j<insertadas.size();j++){
                            tmp = ui->showDifs->toPlainText();
                            concat = tmp.toStdString();
                            add = QString::fromStdString(concat+">"+insertadas[j]+"\n");
                            ui->showDifs->setText(add);
                            cout<<">"<<insertadas[j]<<endl;
                        }


                }
                insertadas.clear();
                eliminadas.clear();

            }
            ui->fieldDif2->clear();
            ui->fieldDiferencia->clear();
            ui->fieldDif2->hide();
            ui->fieldDiferencia->hide();
            ui->titleDif->show();
            ui->infoDif1->hide();
            ui->infoDif2->hide();
            ui->okDiferencia->hide();
            ui->showDifs->show();
    }
        catch(exception &e){
            cout<<e.what()<<endl;
            string error = e.what();
            QString er = QString::fromStdString(error);
            ui->fieldDif2->clear();
            ui->fieldDiferencia->clear();
            ui->errorDif->setText(er);
            ui->errorDif->show();
        }
}

vector<string> split(string s){
    string tmp;
    vector <string> rel;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '\n'){
            tmp.push_back(s[i]);
        }else{
             rel.push_back(tmp);
             tmp.clear();
        }
    }

    return rel;
}

void MainWindow::on_okModificar_clicked(){
            QString ftext = ui->fieldModificar->toPlainText();
            string mods = ftext.toUtf8().constData();
            vector<string> modifications = split(mods);
            control.modificar(nomb_control,modifications);
            ui->fieldModificar->hide();
            ui->okModificar->hide();
            ui->fieldModificar->clear();
            info_Modificacion();
}

bool MainWindow::validacion(string s){
    int puntos = 0,aux = 0;
    string temp;
    vector<Version> v1 = MainWindow::control.totalVersiones();
    vector<Subversion> v2;
    for(int i = 0;i<s.size();i++){
        if(s[i] == '.'){
            puntos++;
        }
    }
    if(puntos== 1 ){
        for(int i = 0;i<v1.size();i++){
            if(v1[i].getNombre()==s){
                return true;
            }
        }
    }
    else if(puntos == 3){
        for(int i = 0;i<s.size() && aux < 2;i++){
            if(s[i] == '.')
                aux++;
            if(aux<2)
                temp.push_back(s[i]);
        }
        for(int i = 0;i<v1.size();i++){
            if(v1[i].getNombre() == temp){
                v2 = v1[i].getSubversiones();
                for(int j = 0; j<v2.size();j++){
                    if(v2[j].getID() == s)
                        return true;
                }
            }
        }


    }
    return false;
}


void MainWindow::on_okObtener_clicked(){
        vector<string> copia;
        string param1 ;
        QString p1 = ui->fieldObtener->text();
        param1 = p1.toUtf8().constData();
        try{
            if(!validacion(param1) || param1.size()>7 || param1[1] != '.'
                    || (param1.size()==7 && param1[3] != '.') || param1.size()==5
                    || param1.size() == 1) throw verificar_version();

            copia = control.obtener(nomb_control,param1);
            while(copia.empty()){
                copia = control.obtener(nomb_control,param1);
            }
            string out;
            for(int i = 0; i < copia.size(); i++){
                out +=copia[i]+"\n";
            }
            QString ftext = QString::fromStdString(out);
            ui->infoVer->setText(ftext);
            ui->fieldObtener->hide();
            ui->okObtener->hide();
            ui->errorOb->hide();
            ui->tVersion->show();
            ui->infoVer->show();
            ui->fieldObtener->clear();

        }
        catch(exception &e){
            string a = e.what();
            QString ftext = QString::fromStdString(a);
            ui->errorOb->setText(ftext);
            ui->errorOb->show();
        }
}

void MainWindow::on_okModificar2_clicked(){
    ui->errorMod->hide();
    QString ftext = ui->selectVersion->text();
    string version = ftext.toUtf8().constData();
    try{
    control.nuevoDelta(version);
    if(!control.estadoDelta() || version.size()>7) throw verificar_modificacion();
    ui->fieldModificar->show();
    ui->okModificar->show();
    ui->msjMod->hide();
    ui->selectVersion->hide();
    ui->okModificar2->hide();
    ui->selectVersion->clear();
    }
    catch(exception &e){
        string msj = e.what();
        if(msj!="stoi"){
        QString ftext = QString::fromStdString(msj);
        ui->errorMod->setText(ftext);
        ui->msjMod->hide();
        ui->errorMod->show();
        }else{
            QString ftext = QString::fromStdString("Las versiones no puede tener letras!");
            ui->errorMod->setText(ftext);
            ui->msjMod->hide();
            ui->errorMod->show();
        }
        }

}

void MainWindow::info_Modificacion(){
        vector<string> v1 = control.obtener(nomb_control,control.getUltima());
        while(v1.empty()){
            v1 = control.obtener(nomb_control,control.getUltima());
        }
        vector<string> v2 = control.obtener(nomb_control,control.getAnterior());
        while(v2.empty()){
            v2 = control.obtener(nomb_control,control.getAnterior());
        }

        int tam,iguales = 0,eliminadas = 0,insertadas = 0,i,j;
        for(i = 0;i<v1.size() && i<v2.size();i++){
            if(v1[i]==v2[i])
                iguales++;
            else{
                insertadas++;
                eliminadas++;
            }
        }
        if(i<v1.size()){
            for(j = i;j<v1.size();j++){
                insertadas++;
            }
        }

        if(i<v2.size()){
            for(j = i; j<v2.size();j++){
                eliminadas++;
            }
        }
        ui->tInfoMod->show();
        string info = "Última version: "+control.getUltima()+"\n Insertadas: "+to_string(insertadas)
                +"\n Eliminadas: "+to_string(eliminadas)+"\n Iguales: "+to_string(iguales);
        ui->infoMod->setText(QString::fromStdString(info));
        ui->infoMod->show();
}
