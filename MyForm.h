#pragma once 



#include "CLserviceFichier.h" 

#include "CLserviceImage.h" 



namespace testWin {



	using namespace System;

	using namespace System::ComponentModel;

	using namespace System::Collections;

	using namespace System::Windows::Forms;

	using namespace System::Data;

	using namespace System::Drawing;

	using namespace System::IO;

	/// <summary> 

	/// Description résumée de MyForm 

	/// </summary> 

	ref class MyForm : public Form
	{
	private: 
		Button^ btn_first;
		Button^ btn_previous;
		Button^ btn_next;
		Button^ btn_last;
		PictureBox^ pctBx;
		Label^ lbl_vision;
		Button^ btn_source;
		Button^ btn_destination;
		TextBox^ txt_source;
		TextBox^ txt_destination;
		GroupBox^ gpBox_typeProcessus;
		RadioButton^ rdb_effacer;
		RadioButton^ rdb_coiperEffacer;
		RadioButton^ rdb_copier;
		Button^ btn_proceder;
		TextBox^ txt_rslt;
		Label^ lbl_resultats;
		FolderBrowserDialog^ fld_source;
		FolderBrowserDialog^ fld_destination;
		System::ComponentModel::Container^ components;
		array<String^>^ listeDeFichier;
		NS_services::CLserviceImage^ image;
		NS_services::CLserviceFichier^ svcFichier;
		int index;
		int nombreImages;

		// events:
		void MyForm_Load(Object^ sender, EventArgs^ e);
		void btn_source_Click(Object^ sender, EventArgs^ e);
		void btn_destination_Click(Object^ sender, EventArgs^ e);
		void btn_first_Click(Object^ sender, EventArgs^ e);
		void btn_proceder_Click(Object^ sender, EventArgs^ e);
		void btn_next_Click(Object^ sender, EventArgs^ e);
		void btn_previous_Click(Object^ sender, EventArgs^ e);
		void btn_last_Click(Object^ sender, EventArgs^ e);

	public:
		MyForm(void);
		void InitializeComponent(void);


	protected:

		/// <summary> 

		/// Nettoyage des ressources utilisées. 

		/// </summary> 

		~MyForm();

	};
}