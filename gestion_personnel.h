#pragma once

#include "CAD.h"
#include "Personnel.h"

namespace NS_SVC {
	ref class gestion_personnel
	{
	private:
		NS_Composants::CAD^ cad;
		NS_Composants::Personnel^ Personnel;
	public:
		gestion_personnel(void) {
			this->cad = gcnew NS_Composants::CAD();
			this->Personnel = gcnew NS_Composants::Personnel();
		}
		void afficherByID(int ID, System::Windows::Forms::TextBox^ textBox7, System::Windows::Forms::TextBox^ textBox1, System::Windows::Forms::TextBox^ textBox2, System::Windows::Forms::TextBox^ textBox4, System::Windows::Forms::TextBox^ textBox3, System::Windows::Forms::TextBox^ textBox5, System::Windows::Forms::TextBox^ textBox6, System::Windows::Forms::BindingSource^ bindingsource2, System::Windows::Forms::DataGridView^ datagridview2) {
			Personnel->setID(ID);
			cad->requete(Personnel->AFFICHERbyID());
			cad->readPersonnel(textBox7, textBox1, textBox2, textBox4, textBox3, textBox5, textBox6);
			cad->datagrid(Personnel->AFFICHERbyID(), bindingsource2, datagridview2);
		}
		void supprimer(int ID) {
			Personnel->setID(ID);
			cad->requete(Personnel->SUPPRIMER());
		}
		void ajouter(System::String^ Nom, System::String^ Prenom, System::String^ adresse, System::String^ dateembauche) {
			Personnel->setNom(Nom);
			Personnel->setPrenom(Prenom);
			Personnel->setadresse(adresse);
			Personnel->setdateembauche(dateembauche);
			cad->requete(Personnel->AJOUTER());
		}
		void ajouter_encadreur(System::String^ Nom, System::String^ Prenom, System::String^ adresse, System::String^ dateembauche, System::String^ nom_encadreur, System::String^ prenom_encadreur) {
			Personnel->setNom(Nom);
			Personnel->setPrenom(Prenom);
			Personnel->setadresse(adresse);
			Personnel->setdateembauche(dateembauche);
			Personnel->setnom_encadreur(nom_encadreur);
			Personnel->setprenom_encadreur(prenom_encadreur);
			cad->requete(Personnel->AJOUTER_ENCADREUR());
		}
		void modifier(int ID, System::String^ Nom, System::String^ Prenom, System::String^ adresse, System::String^ dateembauche) {
			Personnel->setID(ID);
			Personnel->setNom(Nom);
			Personnel->setPrenom(Prenom);
			Personnel->setadresse(adresse);
			Personnel->setdateembauche(dateembauche);
			cad->requete(Personnel->MODIFIER());
		}
		void modifier_encadreur(int ID, System::String^ Nom, System::String^ Prenom, System::String^ adresse, System::String^ dateembauche, System::String^ nom_encadreur, System::String^ prenom_encadreur) {
			Personnel->setID(ID);
			Personnel->setNom(Nom);
			Personnel->setPrenom(Prenom);
			Personnel->setadresse(adresse);
			Personnel->setdateembauche(dateembauche);
			Personnel->setnom_encadreur(nom_encadreur);
			Personnel->setprenom_encadreur(prenom_encadreur);
			cad->requete(Personnel->MODIFIER_ENCADREUR());
		}
	};
}