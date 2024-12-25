TEMPLATE = subdirs
SUBDIRS = Library Welcome \
    a0/NameHash.pro

# ordered forces subprojects to build sequentially, according to SUBDIRS
CONFIG += ordered
