string solution(vector<string> program) {
    string r;
    const int w = size(program[0]);
    const int h = size(program);
    
    stack<int> st;
    auto pop = [&st]{
        auto r = st.empty() ? 0 : st.top();
        return !st.empty() ? st.pop(), r : r;
    };
    
    for (int i = 0, y = 0, x = 0, dy = 0, dx = 1, s = 0;
         i < 100000 && size(r) < 100;
         ++i) {
        int temp;
        if (s) {
            if (program[y][x] == '"')
                s = 0;
            else st.push(program[y][x]);
        }
        else switch(program[y][x]) {
            case 'v': dy = 1; dx = 0; break;
            case '^': dy = -1; dx = 0; break;
            case '<': dy = 0; dx = -1; break;
            case '>': dy = 0; dx = 1; break;
            case ' ': break;
            case '#': dy *= 2; dx *= 2; break;
            case '_': dy = 0; dx = pop() ? -1 : 1; break;
            case '|': dx = 0; dy = pop() ? -1 : 1; break;
            case '+': st.push(pop() + pop()); break;
            case '-': temp = pop(); st.push(pop() - temp); break;
            case '*': st.push(pop() * pop()); break;
            case '/': temp = pop(); st.push(pop() / temp); break;
            case '%': temp = pop(); st.push(pop() % temp); break;
            case '!': st.push(!pop()); break;
            case '`': st.push(pop() < pop()); break;
            case ':': st.push(temp = pop()); st.push(temp); break;
            case '\\': temp = pop(); st.push(exchange(temp, pop())); st.push(temp); break;
            case '$': pop(); break;
            case '.': r += to_string(pop()) + ' '; break;
            case ',': r += char(pop()); break;
            case '"': s = 1; break;
            case '@': return r;
            default: st.push(program[y][x] - 48); break;
        }
        x = ((x + dx) % w + w) % w;
        y = ((y + dy) % h + h) % h;
        dx = (dx>0)-(dx<0);
        dy = (dy>0)-(dy<0);
    }
    return r;
}
