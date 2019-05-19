#ifndef FILETREEVIEW_H
#define FILETREEVIEW_H

#include <QTreeView>

class FileTreeView : public QTreeView {
  Q_OBJECT

public:
    explicit FileTreeView(QWidget* parent = nullptr);

Q_SIGNALS:
    void dragStarted();

protected:
    virtual void mousePressEvent(QMouseEvent* event) override;
    virtual void mouseMoveEvent(QMouseEvent* event) override;

private:
    QPoint dragStartPosition_;
    bool dragStarted_;
};

#endif // FILETREEVIEW_H
