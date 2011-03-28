#include "CreateNewUserController.h"

CreateNewUserController* CreateNewUserController::anInstance = NULL;


CreateNewUserController::CreateNewUserController()
{
    name="";
    password="";
    type="";
}

CreateNewUserController* CreateNewUserController::getInstance()
{
    if(!anInstance) //If it is doesn't already exist
        anInstance = new CreateNewUserController; //Create a new instance, new for the heap.

    return anInstance;//Return the instance.
}


void CreateNewUserController::addToDb()
{
   if (!(name == ""))
    {
        qDebug() <<"BEFORE";
        qDebug() <<userList->size();

        User * aUser = new User(id,password,name,type); //Create the facility to add
        userList->append(aUser); //Append it to the list of facility
        qDebug() <<"AFTER";
        qDebug() <<userList->size();
        userList=NULL;



    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName ("127.0.0.1");
    db.setDatabaseName ("EOBCSTORAGE");
    db.setUserName ("root");
    db.setPassword ("bobpw");
    if (!db.open()) {
 //       QMessageBox::warning(this, tr("Unable to open database"), tr("An error occured while "
                                                                     //"opening the connection: ") + db.lastError().text());
    }
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    QSqlQuery query;
    QString queryText;

    //MISS AREA AND FACILITY ID UNSURE YET


    //the main insert script
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    queryText = "INSERT INTO user (username, password,permissionLvl,id)"
                " VALUES (:name, :password, :type, :id)";
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    query.prepare(queryText);

    //binding the variables from the form to the query
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    query.bindValue(":name", name);
    query.bindValue(":password", password);
    query.bindValue(":type", type);
    query.bindValue(":id", id);


    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    query.exec(); //executing the query

    //checking if the facility was added correctly and if not an error is produced
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 /*   if(query.numRowsAffected() > 0){
        QMessageBox::information( this, "Add Facility Popup",
        "Facility " + facilityName + "has been added sucessfully!!");
    }
    else{
        QMessageBox::information( this, "error",
       "An error has occured while adding " + facilityName + " to the database");
    }*/



db.close();
}
    name="";
    password="";
    type="";
    id =-1;
}

void CreateNewUserController::setName(QString aName)
{
    name = aName;
}

void CreateNewUserController::setPassword(QString aPassword)
{
    password = aPassword;
}

void CreateNewUserController::setType(QString aType)
{
    type =aType;
}

void CreateNewUserController::setId(int anId)
{
    id=anId;
}

void CreateNewUserController::setList(QList<User *> *aUserList)
{
    userList=aUserList;
}
