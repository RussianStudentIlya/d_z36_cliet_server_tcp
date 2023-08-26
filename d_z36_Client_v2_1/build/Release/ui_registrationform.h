/********************************************************************************
** Form generated from reading UI file 'registrationform.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONFORM_H
#define UI_REGISTRATIONFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrationForm
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_7;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *SurnameEdit;
    QLabel *label_2;
    QLineEdit *NameEdit;
    QLabel *label_3;
    QLineEdit *PatronymicEdit;
    QLabel *label_4;
    QLineEdit *EmailEdit;
    QLabel *label_5;
    QLineEdit *LoginEdit;
    QLabel *label_6;
    QLineEdit *PasswordEdit;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;
    QPushButton *LoginButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *RegistrationForm)
    {
        if (RegistrationForm->objectName().isEmpty())
            RegistrationForm->setObjectName("RegistrationForm");
        RegistrationForm->resize(778, 511);
        verticalLayout = new QVBoxLayout(RegistrationForm);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_7 = new QLabel(RegistrationForm);
        label_7->setObjectName("label_7");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(15);
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_7);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(RegistrationForm);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(11);
        label->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        SurnameEdit = new QLineEdit(RegistrationForm);
        SurnameEdit->setObjectName("SurnameEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, SurnameEdit);

        label_2 = new QLabel(RegistrationForm);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        NameEdit = new QLineEdit(RegistrationForm);
        NameEdit->setObjectName("NameEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, NameEdit);

        label_3 = new QLabel(RegistrationForm);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        PatronymicEdit = new QLineEdit(RegistrationForm);
        PatronymicEdit->setObjectName("PatronymicEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, PatronymicEdit);

        label_4 = new QLabel(RegistrationForm);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        EmailEdit = new QLineEdit(RegistrationForm);
        EmailEdit->setObjectName("EmailEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, EmailEdit);

        label_5 = new QLabel(RegistrationForm);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        LoginEdit = new QLineEdit(RegistrationForm);
        LoginEdit->setObjectName("LoginEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, LoginEdit);

        label_6 = new QLabel(RegistrationForm);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        PasswordEdit = new QLineEdit(RegistrationForm);
        PasswordEdit->setObjectName("PasswordEdit");
        PasswordEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(5, QFormLayout::FieldRole, PasswordEdit);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        buttonBox = new QDialogButtonBox(RegistrationForm);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);

        LoginButton = new QPushButton(RegistrationForm);
        LoginButton->setObjectName("LoginButton");

        horizontalLayout->addWidget(LoginButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(SurnameEdit, NameEdit);
        QWidget::setTabOrder(NameEdit, PatronymicEdit);
        QWidget::setTabOrder(PatronymicEdit, EmailEdit);
        QWidget::setTabOrder(EmailEdit, LoginEdit);
        QWidget::setTabOrder(LoginEdit, PasswordEdit);
        QWidget::setTabOrder(PasswordEdit, LoginButton);

        retranslateUi(RegistrationForm);

        QMetaObject::connectSlotsByName(RegistrationForm);
    } // setupUi

    void retranslateUi(QWidget *RegistrationForm)
    {
        RegistrationForm->setWindowTitle(QCoreApplication::translate("RegistrationForm", "Form", nullptr));
        label_7->setText(QCoreApplication::translate("RegistrationForm", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("RegistrationForm", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217: ", nullptr));
        label_2->setText(QCoreApplication::translate("RegistrationForm", "\320\230\320\274\321\217: ", nullptr));
        label_3->setText(QCoreApplication::translate("RegistrationForm", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276: ", nullptr));
        label_4->setText(QCoreApplication::translate("RegistrationForm", "Email: ", nullptr));
        label_5->setText(QCoreApplication::translate("RegistrationForm", "Login:    @", nullptr));
        label_6->setText(QCoreApplication::translate("RegistrationForm", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        LoginButton->setText(QCoreApplication::translate("RegistrationForm", "\320\222\320\276\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationForm: public Ui_RegistrationForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONFORM_H
