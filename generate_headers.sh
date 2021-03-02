Dir=$(dirname $(readlink -f "$0"))

mkdir -p $Dir/generation

cat <<EOT > $Dir/generation/generated_file.h
class GeneratedClass
{
public:
    virtual void GeneratedMethod() = 0;
};
EOT