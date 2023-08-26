/********************************************************************************
** Form generated from reading UI file 'windowchatform.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWCHATFORM_H
#define UI_WINDOWCHATFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_windowChatForm
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *currentLoginLable;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *messagesLineEdit;
    QPushButton *senMessagesButton;
    QPushButton *updateListUserButton;
    QPushButton *closeClientButton;
    QTextBrowser *privateChatBrowser;

    void setupUi(QWidget *windowChatForm)
    {
        if (windowChatForm->objectName().isEmpty())
            windowChatForm->setObjectName("windowChatForm");
        windowChatForm->resize(966, 409);
        verticalLayout = new QVBoxLayout(windowChatForm);
        verticalLayout->setObjectName("verticalLayout");
        currentLoginLable = new QLabel(windowChatForm);
        currentLoginLable->setObjectName("currentLoginLable");
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        currentLoginLable->setFont(font);

        verticalLayout->addWidget(currentLoginLable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(windowChatForm);
        label->setObjectName("label");
        label->setMinimumSize(QSize(141, 21));

        horizontalLayout->addWidget(label);

        messagesLineEdit = new QLineEdit(windowChatForm);
        messagesLineEdit->setObjectName("messagesLineEdit");
        messagesLineEdit->setMinimumSize(QSize(250, 29));

        horizontalLayout->addWidget(messagesLineEdit);

        senMessagesButton = new QPushButton(windowChatForm);
        senMessagesButton->setObjectName("senMessagesButton");
        senMessagesButton->setMinimumSize(QSize(181, 29));

        horizontalLayout->addWidget(senMessagesButton);

        updateListUserButton = new QPushButton(windowChatForm);
        updateListUserButton->setObjectName("updateListUserButton");
        updateListUserButton->setMinimumSize(QSize(171, 29));

        horizontalLayout->addWidget(updateListUserButton);

        closeClientButton = new QPushButton(windowChatForm);
        closeClientButton->setObjectName("closeClientButton");
        closeClientButton->setMinimumSize(QSize(171, 29));

        horizontalLayout->addWidget(closeClientButton);


        verticalLayout->addLayout(horizontalLayout);

        privateChatBrowser = new QTextBrowser(windowChatForm);
        privateChatBrowser->setObjectName("privateChatBrowser");
        QFont font1;
        font1.setPointSize(11);
        privateChatBrowser->setFont(font1);

        verticalLayout->addWidget(privateChatBrowser);


        retranslateUi(windowChatForm);

        QMetaObject::connectSlotsByName(windowChatForm);
    } // setupUi

    void retranslateUi(QWidget *windowChatForm)
    {
        windowChatForm->setWindowTitle(QCoreApplication::translate("windowChatForm", "Form", nullptr));
        currentLoginLable->setText(QString());
        label->setText(QCoreApplication::translate("windowChatForm", "\320\242\320\265\320\272\321\201\321\202 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\321\217: ", nullptr));
        senMessagesButton->setText(QCoreApplication::translate("windowChatForm", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        updateListUserButton->setText(QCoreApplication::translate("windowChatForm", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272", nullptr));
        closeClientButton->setText(QCoreApplication::translate("windowChatForm", "\320\222\321\213\320\271\321\202\320\270 \320\270\320\267 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class windowChatForm: public Ui_windowChatForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWCHATFORM_H
